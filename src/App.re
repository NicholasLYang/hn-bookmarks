let component = ReasonReact.statelessComponent("App");

let make = _children => {
  ...component,
  render: _self =>
    <div
      style={ReactDOMRe.Style.make(~fontFamily="omnes-pro, sans-serif", ~width="90%", ~backgroundColor="#f6f6ef", ())}>
      <Header />
      <BookmarksList />
    </div>,
};
