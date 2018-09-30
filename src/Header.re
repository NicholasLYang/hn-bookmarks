let component = ReasonReact.statelessComponent("Link");

let make = _children => {
  ...component,
  render: _self =>
    <div
      style={
        ReactDOMRe.Style.make(
          ~display="flex",
          ~flexDirection="row",
          ~height="50px",
          ~paddingLeft="30px",
          ~marginBottom="40px",
          ~width="90%",
          ~fontWeight="500",
          ~alignItems="center",
          ~backgroundColor="#ff6600",
          (),
        )
      }>
      <div style={ReactDOMRe.Style.make(~fontSize="1.4em", ())}> {ReasonReact.string("Bookmarks")} </div>
    </div>,
};
