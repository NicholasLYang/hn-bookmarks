require_relative './config/application'

app = Application.new
use Rack::Cors do
  allow do
    origins '*'
    resource '*', :headers => :any,
                 :methods => [
                     :get,
                     :post,
                     :put,
                     :delete,
                     :options
                 ],
                 :expose  => ['access-token', 'expiry', 'token-type', 'uid', 'client']
  end
end
run app
