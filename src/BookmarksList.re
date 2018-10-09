type bookmark = {
  id: string,
  url: string,
  title: string,
};

module GetBookmarks = [%graphql
  {|
  query getBookmarks {
      bookmarks @bsRecord {
          id
          title
          url
      }
  }
|}
];

module GetBookmarksQuery = ReasonApollo.CreateQuery(GetBookmarks);

let component = ReasonReact.statelessComponent("BookmarksList");

let make = _children => {
  ...component,
  render: _self => {
    let bookmarkQuery = GetBookmarks.make();

    <GetBookmarksQuery variables=bookmarkQuery##variables>
      ...{
           ({result}) =>
             switch (result) {
             | Loading => <div> {ReasonReact.string("Loading")} </div>
             | Error(error) =>
               <div
                 style={
                   ReactDOMRe.Style.make(
                     ~backgroundColor="#b8dbd9",
                     ~color="black",
                     ~padding="20%",
                     ~fontSize="2em",
                     ~fontFamily="Helvetica, sans-serif",
                     (),
                   )
                 }>
                 {ReasonReact.string(error##message)}
               </div>
             | Data(response) =>
               <div
                 style={
                   ReactDOMRe.Style.make(
                     ~display="flex",
                     ~fontSize="1.2em",
                     ~flexDirection="column",
                     ~alignItems="flex-start",
                     ~lineHeight="1.4em",
                     ~padding="20px",
                     ~width="100%",
                     (),
                   )
                 }>
                 {
                   ReasonReact.array(
                     Array.mapi((index, {id, url, title}) => <Link index key=id url title />, response##bookmarks),
                   )
                 }
               </div>
             }
         }
    </GetBookmarksQuery>;
  },
};
