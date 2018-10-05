class ApplicationController
  def method_missing(name, *args, &block)
    GraphQL::ExecutionError.new(
      "No method #{name} for controller #{self.class.name}."\
      " Did you define it?"
    )
  end
end
