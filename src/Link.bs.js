// Generated by BUCKLESCRIPT VERSION 4.0.6, PLEASE EDIT WITH CARE
'use strict';

var React = require("react");
var ReasonReact = require("reason-react/src/ReasonReact.js");

var component = ReasonReact.statelessComponent("Link");

function make(_, index, title, url) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function () {
              return React.createElement("div", {
                          style: {
                            display: "flex",
                            width: "100%",
                            alignItems: "center",
                            flexDirection: "row",
                            justifyContent: "flex-start"
                          }
                        }, React.createElement("div", {
                              style: {
                                width: "40px"
                              }
                            }, String(index + 1 | 0)), React.createElement("div", {
                              style: {
                                width: "60%"
                              }
                            }, React.createElement("a", {
                                  href: url
                                }, title)), React.createElement("div", {
                              style: {
                                display: "flex",
                                width: "100%",
                                flexDirection: "row",
                                flexShrink: "4",
                                justifyContent: "center"
                              }
                            }, React.createElement("a", {
                                  href: "/edit"
                                }, "Edit")));
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

exports.component = component;
exports.make = make;
/* component Not a pure module */
