let component = ReasonReact.statelessComponent("Link");

let make = (_children, ~rating) => {
  ...component,
  render: _self =>
    <div
      style={
        ReactDOMRe.Style.make(
          ~display="flex",
          ~alignItems="center",
          ~justifyContent="center",
          ~fontSize="1.4em",
          ~padding="5px",
          ~width="50px",
          (),
        )
      }>
      {ReasonReact.string(string_of_int(rating))}
    </div>,
};
