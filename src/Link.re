let component = ReasonReact.statelessComponent("Link");

let make = (_children, ~index, ~title, ~rating, ~url) => {
  ...component,
  render: _self =>
    <div
      style={
        ReactDOMRe.Style.make(
          ~display="flex",
          ~flexDirection="row",
          ~justifyContent="flex-start",
          ~alignItems="center",
          ~width="80%",
          (),
        )
      }>
      <div style={ReactDOMRe.Style.make(~width="40px", ())}> {ReasonReact.string(string_of_int(index))} </div>
      <RatingCounter rating />
      <a href=url> {ReasonReact.string(title)} </a>
    </div>,
};
