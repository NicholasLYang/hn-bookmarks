class BookmarkType < GraphQL::Schema::Object
  field :title, String, null: false
  field :url, String, null: false
  queryable_on :title, String
  list
end
