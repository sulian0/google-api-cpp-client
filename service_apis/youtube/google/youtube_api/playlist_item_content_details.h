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
#ifndef  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_CONTENT_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_CONTENT_DETAILS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

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
class PlaylistItemContentDetails : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static PlaylistItemContentDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemContentDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit PlaylistItemContentDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~PlaylistItemContentDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::PlaylistItemContentDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::PlaylistItemContentDetails");
  }

  /**
   * Determine if the '<code>endAt</code>' attribute was set.
   *
   * @return true if the '<code>endAt</code>' attribute was set.
   */
  bool has_end_at() const {
    return Storage().isMember("endAt");
  }

  /**
   * Clears the '<code>endAt</code>' attribute.
   */
  void clear_end_at() {
    MutableStorage()->removeMember("endAt");
  }


  /**
   * Get the value of the '<code>endAt</code>' attribute.
   */
  const StringPiece get_end_at() const {
    const Json::Value& v = Storage("endAt");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>endAt</code>' attribute.
   *
   * The time, measured in seconds from the start of the video, when the video
   * should stop playing. (The playlist owner can specify the times when the
   * video should start and stop playing when the video is played in the context
   * of the playlist.) By default, assume that the video.endTime is the end of
   * the video.
   *
   * @param[in] value The new value.
   */
  void set_end_at(const StringPiece& value) {
    *MutableStorage("endAt") = value.data();
  }

  /**
   * Determine if the '<code>note</code>' attribute was set.
   *
   * @return true if the '<code>note</code>' attribute was set.
   */
  bool has_note() const {
    return Storage().isMember("note");
  }

  /**
   * Clears the '<code>note</code>' attribute.
   */
  void clear_note() {
    MutableStorage()->removeMember("note");
  }


  /**
   * Get the value of the '<code>note</code>' attribute.
   */
  const StringPiece get_note() const {
    const Json::Value& v = Storage("note");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>note</code>' attribute.
   *
   * A user-generated note for this item.
   *
   * @param[in] value The new value.
   */
  void set_note(const StringPiece& value) {
    *MutableStorage("note") = value.data();
  }

  /**
   * Determine if the '<code>startAt</code>' attribute was set.
   *
   * @return true if the '<code>startAt</code>' attribute was set.
   */
  bool has_start_at() const {
    return Storage().isMember("startAt");
  }

  /**
   * Clears the '<code>startAt</code>' attribute.
   */
  void clear_start_at() {
    MutableStorage()->removeMember("startAt");
  }


  /**
   * Get the value of the '<code>startAt</code>' attribute.
   */
  const StringPiece get_start_at() const {
    const Json::Value& v = Storage("startAt");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>startAt</code>' attribute.
   *
   * The time, measured in seconds from the start of the video, when the video
   * should start playing. (The playlist owner can specify the times when the
   * video should start and stop playing when the video is played in the context
   * of the playlist.) The default value is 0.
   *
   * @param[in] value The new value.
   */
  void set_start_at(const StringPiece& value) {
    *MutableStorage("startAt") = value.data();
  }

  /**
   * Determine if the '<code>videoId</code>' attribute was set.
   *
   * @return true if the '<code>videoId</code>' attribute was set.
   */
  bool has_video_id() const {
    return Storage().isMember("videoId");
  }

  /**
   * Clears the '<code>videoId</code>' attribute.
   */
  void clear_video_id() {
    MutableStorage()->removeMember("videoId");
  }


  /**
   * Get the value of the '<code>videoId</code>' attribute.
   */
  const StringPiece get_video_id() const {
    const Json::Value& v = Storage("videoId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>videoId</code>' attribute.
   *
   * The ID that YouTube uses to uniquely identify a video. To retrieve the
   * video resource, set the id query parameter to this value in your API
   * request.
   *
   * @param[in] value The new value.
   */
  void set_video_id(const StringPiece& value) {
    *MutableStorage("videoId") = value.data();
  }

 private:
  void operator=(const PlaylistItemContentDetails&);
};  // PlaylistItemContentDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_PLAYLIST_ITEM_CONTENT_DETAILS_H_
