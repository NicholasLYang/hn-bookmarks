require 'sequel'
require 'pg'
require 'yaml'
require 'erb'
require 'logger'

config_template = ERB.new(File.read('config/database.yml'))
database_config = YAML.load(config_template.result)
config = database_config[ENV["ENVIRONMENT"]]

DATABASE = Sequel.connect(
  adapter: 'postgres',
  host: config['host'],
  database: config['database'],
  user: config['username'],
  password: config['password'],
  loggers: [Logger.new($stdout)]
)
 
