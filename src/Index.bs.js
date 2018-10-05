// Generated by BUCKLESCRIPT VERSION 4.0.6, PLEASE EDIT WITH CARE
'use strict';

var ReactDOMRe = require("reason-react/src/ReactDOMRe.js");
var ApolloLinks = require("reason-apollo/src/ApolloLinks.bs.js");
var ReasonReact = require("reason-react/src/ReasonReact.js");
var ReasonApollo = require("reason-apollo/src/ReasonApollo.bs.js");
var ApolloProvider = require("reason-apollo/src/ApolloProvider.bs.js");
var App$ReactTemplate = require("./App.bs.js");
var ApolloInMemoryCache = require("reason-apollo/src/ApolloInMemoryCache.bs.js");

var inMemoryCache = ApolloInMemoryCache.createInMemoryCache(undefined, undefined, /* () */0);

var httpLink = ApolloLinks.createHttpLink("http://localhost:8080", undefined, undefined, undefined, undefined, undefined, /* () */0);

var client = ReasonApollo.createApolloClient(httpLink, inMemoryCache, undefined, undefined, undefined, undefined, /* () */0);

ReactDOMRe.renderToElementWithId(ReasonReact.element(undefined, undefined, ApolloProvider.make(client, /* array */[ReasonReact.element(undefined, undefined, App$ReactTemplate.make(/* array */[]))])), "app");

exports.inMemoryCache = inMemoryCache;
exports.httpLink = httpLink;
exports.client = client;
/* inMemoryCache Not a pure module */
