require 'dotenv/load'
require 'json'
require 'sequel'
require 'graphql'
require 'grate'
require 'rack/cors'
require 'hanami/router'

# Ideally should move off this, but it's so damn useful
require 'active_support/inflector'
require 'active_support'

# Load the database first
require_relative '../db/database'

# Then load all the abstract classes
require_relative '../app/types/query_type'
require_relative '../app/models/application_model'
require_relative '../app/controllers/application_controller.rb'
require_relative '../app/schema'

require_relative '../app/models/bookmark'
require_relative '../app/controllers/bookmarks_controller'
require_relative '../app/types/bookmark_type'


class Application
  def call(env)
    req = Rack::Request.new(env)
    case req.path_info
    when /graphql/
      params = JSON.parse(req.body.read)
      res = Schema.execute(params["query"])
      ['200', {'Content-Type' => 'text/json'}, [res.to_json]]
    else
      ['404', {'Content-Type' => 'text/json'}, ["404 Not Found"]]
    end
  end
end
