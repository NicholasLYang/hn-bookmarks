let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
/* Create an HTTP Link */
let httpLink = ApolloLinks.createHttpLink(~uri="http://localhost:9292/graphql", ());

let client = ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());

ReactDOMRe.renderToElementWithId(<ReasonApollo.Provider client> <App /> </ReasonApollo.Provider>, "app");
