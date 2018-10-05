require 'dotenv/load'
require_relative '../database'

Sequel.migration do
  change do
    create_table(:bookmarks) do
      primary_key :id
      String :title, null: false
      String :url, null: false
    end
  end
end
