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
#ifndef  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_LIST_RESPONSE_H_
#define  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_LIST_RESPONSE_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/page_info.h"
#include "google/youtube_api/playlist_item.h"
#include "google/youtube_api/token_pagination.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class PlaylistItemListResponse : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PlaylistItemListResponse* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemListResponse(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemListResponse(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PlaylistItemListResponse();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::PlaylistItemListResponse</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::PlaylistItemListResponse");
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * Etag of this resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>eventId</code>' attribute was set.
   *
   * @return true if the '<code>eventId</code>' attribute was set.
   */
  bool has_event_id() const {
    return Storage().isMember("eventId");
  }

  /**
   * Clears the '<code>eventId</code>' attribute.
   */
  void clear_event_id() {
    MutableStorage()->removeMember("eventId");
  }


  /**
   * Get the value of the '<code>eventId</code>' attribute.
   */
  const StringPiece get_event_id() const {
    const Json::Value& v = Storage("eventId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>eventId</code>' attribute.
   *
   * Serialized EventId of the request which produced this response.
   *
   * @param[in] value The new value.
   */
  void set_event_id(const StringPiece& value) {
    *MutableStorage("eventId") = value.data();
  }

  /**
   * Determine if the '<code>items</code>' attribute was set.
   *
   * @return true if the '<code>items</code>' attribute was set.
   */
  bool has_items() const {
    return Storage().isMember("items");
  }

  /**
   * Clears the '<code>items</code>' attribute.
   */
  void clear_items() {
    MutableStorage()->removeMember("items");
  }


  /**
   * Get a reference to the value of the '<code>items</code>' attribute.
   */
  const client::JsonCppArray<PlaylistItem > get_items() const {
     const Json::Value& storage = Storage("items");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<PlaylistItem > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * A list of playlist items that match the request criteria.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<PlaylistItem > mutable_items() {
    Json::Value* storage = MutableStorage("items");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<PlaylistItem > >(storage);
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Identifies what kind of resource this is. Value: the fixed string
   * "youtube#playlistItemListResponse".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>nextPageToken</code>' attribute was set.
   *
   * @return true if the '<code>nextPageToken</code>' attribute was set.
   */
  bool has_next_page_token() const {
    return Storage().isMember("nextPageToken");
  }

  /**
   * Clears the '<code>nextPageToken</code>' attribute.
   */
  void clear_next_page_token() {
    MutableStorage()->removeMember("nextPageToken");
  }


  /**
   * Get the value of the '<code>nextPageToken</code>' attribute.
   */
  const StringPiece get_next_page_token() const {
    const Json::Value& v = Storage("nextPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextPageToken</code>' attribute.
   *
   * The token that can be used as the value of the pageToken parameter to
   * retrieve the next page in the result set.
   *
   * @param[in] value The new value.
   */
  void set_next_page_token(const StringPiece& value) {
    *MutableStorage("nextPageToken") = value.data();
  }

  /**
   * Determine if the '<code>pageInfo</code>' attribute was set.
   *
   * @return true if the '<code>pageInfo</code>' attribute was set.
   */
  bool has_page_info() const {
    return Storage().isMember("pageInfo");
  }

  /**
   * Clears the '<code>pageInfo</code>' attribute.
   */
  void clear_page_info() {
    MutableStorage()->removeMember("pageInfo");
  }


  /**
   * Get a reference to the value of the '<code>pageInfo</code>' attribute.
   */
  const PageInfo get_page_info() const {
     const Json::Value& storage = Storage("pageInfo");
    return client::JsonValueToCppValueHelper<PageInfo >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>pageInfo</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  PageInfo mutable_pageInfo() {
    Json::Value* storage = MutableStorage("pageInfo");
    return client::JsonValueToMutableCppValueHelper<PageInfo >(storage);
  }

  /**
   * Determine if the '<code>prevPageToken</code>' attribute was set.
   *
   * @return true if the '<code>prevPageToken</code>' attribute was set.
   */
  bool has_prev_page_token() const {
    return Storage().isMember("prevPageToken");
  }

  /**
   * Clears the '<code>prevPageToken</code>' attribute.
   */
  void clear_prev_page_token() {
    MutableStorage()->removeMember("prevPageToken");
  }


  /**
   * Get the value of the '<code>prevPageToken</code>' attribute.
   */
  const StringPiece get_prev_page_token() const {
    const Json::Value& v = Storage("prevPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>prevPageToken</code>' attribute.
   *
   * The token that can be used as the value of the pageToken parameter to
   * retrieve the previous page in the result set.
   *
   * @param[in] value The new value.
   */
  void set_prev_page_token(const StringPiece& value) {
    *MutableStorage("prevPageToken") = value.data();
  }

  /**
   * Determine if the '<code>tokenPagination</code>' attribute was set.
   *
   * @return true if the '<code>tokenPagination</code>' attribute was set.
   */
  bool has_token_pagination() const {
    return Storage().isMember("tokenPagination");
  }

  /**
   * Clears the '<code>tokenPagination</code>' attribute.
   */
  void clear_token_pagination() {
    MutableStorage()->removeMember("tokenPagination");
  }


  /**
   * Get a reference to the value of the '<code>tokenPagination</code>'
   * attribute.
   */
  const TokenPagination get_token_pagination() const {
     const Json::Value& storage = Storage("tokenPagination");
    return client::JsonValueToCppValueHelper<TokenPagination >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>tokenPagination</code>'
   * property.
   * @return The result can be modified to change the attribute value.
   */
  TokenPagination mutable_tokenPagination() {
    Json::Value* storage = MutableStorage("tokenPagination");
    return client::JsonValueToMutableCppValueHelper<TokenPagination >(storage);
  }

  /**
   * Determine if the '<code>visitorId</code>' attribute was set.
   *
   * @return true if the '<code>visitorId</code>' attribute was set.
   */
  bool has_visitor_id() const {
    return Storage().isMember("visitorId");
  }

  /**
   * Clears the '<code>visitorId</code>' attribute.
   */
  void clear_visitor_id() {
    MutableStorage()->removeMember("visitorId");
  }


  /**
   * Get the value of the '<code>visitorId</code>' attribute.
   */
  const StringPiece get_visitor_id() const {
    const Json::Value& v = Storage("visitorId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>visitorId</code>' attribute.
   *
   * The visitorId identifies the visitor.
   *
   * @param[in] value The new value.
   */
  void set_visitor_id(const StringPiece& value) {
    *MutableStorage("visitorId") = value.data();
  }

 private:
  void operator=(const PlaylistItemListResponse&);
};  // PlaylistItemListResponse
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_LIST_RESPONSE_H_
