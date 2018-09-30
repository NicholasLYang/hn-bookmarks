type link = {
  url: string,
  title: string,
  rating: int,
};

type state = {links: list((int, link))};

type action =
  | DeleteLink(int);

let component = ReasonReact.reducerComponent("App");

let make = _children => {
  ...component,
  initialState: () => {
    links: [
      (1, {url: "https://google.com", rating: 0, title: "Google"}),
      (2, {url: "https://reddit.com", rating: 5, title: "Reddit"}),
      (3, {url: "https://news.ycombinator.com", rating: 10, title: "Hacker News"}),
    ],
  },
  reducer: (action, state) =>
    switch (action) {
    | DeleteLink(id) => ReasonReact.Update({links: List.remove_assoc(id, state.links)})
    },
  render: self => {
    let sortedLinks = List.sort(((_id, link1), (_id, link2)) => link2.rating - link1.rating, self.state.links);
    <div
      style={
        ReactDOMRe.Style.make(
          ~display="flex",
          ~fontSize="1.2em",
          ~fontFamily="omnes-pro, sans-serif",
          ~flexDirection="column",
          ~alignItems="center",
          ~lineHeight="1.4em",
          ~width="100%",
          (),
        )
      }>
      <Header />
      {
        ReasonReact.array(
          Array.of_list(
            List.mapi(
              (index, (id, {url, rating, title})) => <Link index key={string_of_int(id)} url rating title />,
              sortedLinks,
            ),
          ),
        )
      }
    </div>;
  },
};
