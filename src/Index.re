let inMemoryCache = ApolloInMemoryCache.createInMemoryCache();
/* Create an HTTP Link */
let httpLink = ApolloLinks.createHttpLink(~uri="http://localhost:8080", ());

let client = ReasonApollo.createApolloClient(~link=httpLink, ~cache=inMemoryCache, ());

ReactDOMRe.renderToElementWithId(<ReasonApollo.Provider client> <App /> </ReasonApollo.Provider>, "app");
