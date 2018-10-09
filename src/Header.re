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
          ~width="100%",
          ~fontWeight="500",
          ~alignItems="center",
          ~backgroundColor="#ff6600",
          (),
        )
      }>
      <div style={ReactDOMRe.Style.make(~fontSize="1.4em", ~paddingLeft="30px", ())}>
        {ReasonReact.string("Bookmarks")}
      </div>
    </div>,
};
