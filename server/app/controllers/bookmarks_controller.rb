class BookmarksController < ApplicationController
  def all
    Bookmark.all
  end
  def find_by(field, field_name)
    return Bookmark[field] if field_name == :id
    Bookmark.where("#{field_name}": field)
  end
end
