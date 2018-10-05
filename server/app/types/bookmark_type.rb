class BookmarkType < GraphQL::Schema::Object
  field :id, ID, null: false
  field :title, String, null: false
  field :url, String, null: false
  queryable_on :title, String
  list
end
