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
      <div style={ReactDOMRe.Style.make(~width="60%", ())}> <a href=url> {ReasonReact.string(title)} </a> </div>
      <div
        style={
          ReactDOMRe.Style.make(
            ~display="flex",
            ~flexDirection="row",
            ~justifyContent="flex-end",
            ~flexShrink="4",
            ~width="100%",
            (),
          )
        }>
        <a href="/edit"> {ReasonReact.string("Edit")} </a>
      </div>
    </div>,
};
