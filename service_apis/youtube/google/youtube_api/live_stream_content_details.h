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
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2014-12-11, 22:05:47 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
//   Revision: 125
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_YOUTUBE_API_LIVE_STREAM_CONTENT_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_LIVE_STREAM_CONTENT_DETAILS_H_

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
 * Detailed settings of a stream.
 *
 * @ingroup DataObject
 */
class LiveStreamContentDetails : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static LiveStreamContentDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStreamContentDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit LiveStreamContentDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~LiveStreamContentDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::LiveStreamContentDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::LiveStreamContentDetails");
  }

  /**
   * Determine if the '<code>closedCaptionsIngestionUrl</code>' attribute was
   * set.
   *
   * @return true if the '<code>closedCaptionsIngestionUrl</code>' attribute was
   * set.
   */
  bool has_closed_captions_ingestion_url() const {
    return Storage().isMember("closedCaptionsIngestionUrl");
  }

  /**
   * Clears the '<code>closedCaptionsIngestionUrl</code>' attribute.
   */
  void clear_closed_captions_ingestion_url() {
    MutableStorage()->removeMember("closedCaptionsIngestionUrl");
  }


  /**
   * Get the value of the '<code>closedCaptionsIngestionUrl</code>' attribute.
   */
  const StringPiece get_closed_captions_ingestion_url() const {
    const Json::Value& v = Storage("closedCaptionsIngestionUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>closedCaptionsIngestionUrl</code>' attribute.
   *
   * The ingestion URL where the closed captions of this stream are sent.
   *
   * @param[in] value The new value.
   */
  void set_closed_captions_ingestion_url(const StringPiece& value) {
    *MutableStorage("closedCaptionsIngestionUrl") = value.data();
  }

  /**
   * Determine if the '<code>isReusable</code>' attribute was set.
   *
   * @return true if the '<code>isReusable</code>' attribute was set.
   */
  bool has_is_reusable() const {
    return Storage().isMember("isReusable");
  }

  /**
   * Clears the '<code>isReusable</code>' attribute.
   */
  void clear_is_reusable() {
    MutableStorage()->removeMember("isReusable");
  }


  /**
   * Get the value of the '<code>isReusable</code>' attribute.
   */
  bool get_is_reusable() const {
    const Json::Value& storage = Storage("isReusable");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>isReusable</code>' attribute.
   *
   * Indicates whether the stream is reusable, which means that it can be bound
   * to multiple broadcasts. It is common for broadcasters to reuse the same
   * stream for many different broadcasts if those broadcasts occur at different
   * times.
   *
   * If you set this value to false, then the stream will not be reusable, which
   * means that it can only be bound to one broadcast. Non-reusable streams
   * differ from reusable streams in the following ways:
   * - A non-reusable stream can only be bound to one broadcast.
   * - A non-reusable stream might be deleted by an automated process after the
   * broadcast ends.
   * - The  liveStreams.list method does not list non-reusable streams if you
   * call the method and set the mine parameter to true. The only way to use
   * that method to retrieve the resource for a non-reusable stream is to use
   * the id parameter to identify the stream.
   *
   * @param[in] value The new value.
   */
  void set_is_reusable(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("isReusable"));
  }

 private:
  void operator=(const LiveStreamContentDetails&);
};  // LiveStreamContentDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_LIVE_STREAM_CONTENT_DETAILS_H_