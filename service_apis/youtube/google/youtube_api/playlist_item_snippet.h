// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2015-01-14 17:53:03 UTC
//   on: 2015-03-12, 20:35:33 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 130
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_SNIPPET_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/resource_id.h"
#include "google/youtube_api/thumbnail_details.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a playlist, including title, description and thumbnails.
 *
 * @ingroup DataObject
 */
class PlaylistItemSnippet : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PlaylistItemSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PlaylistItemSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::PlaylistItemSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::PlaylistItemSnippet");
  }

  /**
   * Determine if the '<code>channelId</code>' attribute was set.
   *
   * @return true if the '<code>channelId</code>' attribute was set.
   */
  bool has_channel_id() const {
    return Storage().isMember("channelId");
  }

  /**
   * Clears the '<code>channelId</code>' attribute.
   */
  void clear_channel_id() {
    MutableStorage()->removeMember("channelId");
  }


  /**
   * Get the value of the '<code>channelId</code>' attribute.
   */
  const StringPiece get_channel_id() const {
    const Json::Value& v = Storage("channelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the user that added the item
   * to the playlist.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>channelTitle</code>' attribute was set.
   *
   * @return true if the '<code>channelTitle</code>' attribute was set.
   */
  bool has_channel_title() const {
    return Storage().isMember("channelTitle");
  }

  /**
   * Clears the '<code>channelTitle</code>' attribute.
   */
  void clear_channel_title() {
    MutableStorage()->removeMember("channelTitle");
  }


  /**
   * Get the value of the '<code>channelTitle</code>' attribute.
   */
  const StringPiece get_channel_title() const {
    const Json::Value& v = Storage("channelTitle");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelTitle</code>' attribute.
   *
   * Channel title for the channel that the playlist item belongs to.
   *
   * @param[in] value The new value.
   */
  void set_channel_title(const StringPiece& value) {
    *MutableStorage("channelTitle") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * The item's description.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>playlistId</code>' attribute was set.
   *
   * @return true if the '<code>playlistId</code>' attribute was set.
   */
  bool has_playlist_id() const {
    return Storage().isMember("playlistId");
  }

  /**
   * Clears the '<code>playlistId</code>' attribute.
   */
  void clear_playlist_id() {
    MutableStorage()->removeMember("playlistId");
  }


  /**
   * Get the value of the '<code>playlistId</code>' attribute.
   */
  const StringPiece get_playlist_id() const {
    const Json::Value& v = Storage("playlistId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>playlistId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify the playlist that the
   * playlist item is in.
   *
   * @param[in] value The new value.
   */
  void set_playlist_id(const StringPiece& value) {
    *MutableStorage("playlistId") = value.data();
  }

  /**
   * Determine if the '<code>position</code>' attribute was set.
   *
   * @return true if the '<code>position</code>' attribute was set.
   */
  bool has_position() const {
    return Storage().isMember("position");
  }

  /**
   * Clears the '<code>position</code>' attribute.
   */
  void clear_position() {
    MutableStorage()->removeMember("position");
  }


  /**
   * Get the value of the '<code>position</code>' attribute.
   */
  uint32 get_position() const {
    const Json::Value& storage = Storage("position");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>position</code>' attribute.
   *
   * The order in which the item appears in the playlist. The value uses a zero-
   * based index, so the first item has a position of 0, the second item has a
   * position of 1, and so forth.
   *
   * @param[in] value The new value.
   */
  void set_position(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("position"));
  }

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time that the item was added to the playlist. The value is
   * specified in ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>resourceId</code>' attribute was set.
   *
   * @return true if the '<code>resourceId</code>' attribute was set.
   */
  bool has_resource_id() const {
    return Storage().isMember("resourceId");
  }

  /**
   * Clears the '<code>resourceId</code>' attribute.
   */
  void clear_resource_id() {
    MutableStorage()->removeMember("resourceId");
  }


  /**
   * Get a reference to the value of the '<code>resourceId</code>' attribute.
   */
  const ResourceId get_resource_id() const {
     const Json::Value& storage = Storage("resourceId");
    return client::JsonValueToCppValueHelper<ResourceId >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>resourceId</code>'
   * property.
   *
   * The id object contains information that can be used to uniquely identify
   * the resource that is included in the playlist as the playlist item.
   *
   * @return The result can be modified to change the attribute value.
   */
  ResourceId mutable_resourceId() {
    Json::Value* storage = MutableStorage("resourceId");
    return client::JsonValueToMutableCppValueHelper<ResourceId >(storage);
  }

  /**
   * Determine if the '<code>thumbnails</code>' attribute was set.
   *
   * @return true if the '<code>thumbnails</code>' attribute was set.
   */
  bool has_thumbnails() const {
    return Storage().isMember("thumbnails");
  }

  /**
   * Clears the '<code>thumbnails</code>' attribute.
   */
  void clear_thumbnails() {
    MutableStorage()->removeMember("thumbnails");
  }


  /**
   * Get a reference to the value of the '<code>thumbnails</code>' attribute.
   */
  const ThumbnailDetails get_thumbnails() const {
     const Json::Value& storage = Storage("thumbnails");
    return client::JsonValueToCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>thumbnails</code>'
   * property.
   *
   * A map of thumbnail images associated with the playlist item. For each
   * object in the map, the key is the name of the thumbnail image, and the
   * value is an object that contains other information about the thumbnail.
   *
   * @return The result can be modified to change the attribute value.
   */
  ThumbnailDetails mutable_thumbnails() {
    Json::Value* storage = MutableStorage("thumbnails");
    return client::JsonValueToMutableCppValueHelper<ThumbnailDetails >(storage);
  }

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * The item's title.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const PlaylistItemSnippet&);
};  // PlaylistItemSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_SNIPPET_H_
