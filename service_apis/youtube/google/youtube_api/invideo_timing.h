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
#ifndef  GOOGLE_YOUTUBE_API_INVIDEO_TIMING_H_
#define  GOOGLE_YOUTUBE_API_INVIDEO_TIMING_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Describes a temporal position of a visual widget inside a video.
 *
 * @ingroup DataObject
 */
class InvideoTiming : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static InvideoTiming* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InvideoTiming(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit InvideoTiming(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~InvideoTiming();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::InvideoTiming</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::InvideoTiming");
  }

  /**
   * Determine if the '<code>durationMs</code>' attribute was set.
   *
   * @return true if the '<code>durationMs</code>' attribute was set.
   */
  bool has_duration_ms() const {
    return Storage().isMember("durationMs");
  }

  /**
   * Clears the '<code>durationMs</code>' attribute.
   */
  void clear_duration_ms() {
    MutableStorage()->removeMember("durationMs");
  }


  /**
   * Get the value of the '<code>durationMs</code>' attribute.
   */
  uint64 get_duration_ms() const {
    const Json::Value& storage = Storage("durationMs");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>durationMs</code>' attribute.
   *
   * Defines the duration in milliseconds for which the promotion should be
   * displayed. If missing, the client should use the default.
   *
   * @param[in] value The new value.
   */
  void set_duration_ms(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("durationMs"));
  }

  /**
   * Determine if the '<code>offsetMs</code>' attribute was set.
   *
   * @return true if the '<code>offsetMs</code>' attribute was set.
   */
  bool has_offset_ms() const {
    return Storage().isMember("offsetMs");
  }

  /**
   * Clears the '<code>offsetMs</code>' attribute.
   */
  void clear_offset_ms() {
    MutableStorage()->removeMember("offsetMs");
  }


  /**
   * Get the value of the '<code>offsetMs</code>' attribute.
   */
  uint64 get_offset_ms() const {
    const Json::Value& storage = Storage("offsetMs");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>offsetMs</code>' attribute.
   *
   * Defines the time at which the promotion will appear. Depending on the value
   * of type the value of the offsetMs field will represent a time offset from
   * the start or from the end of the video, expressed in milliseconds.
   *
   * @param[in] value The new value.
   */
  void set_offset_ms(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("offsetMs"));
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * Describes a timing type. If the value is offsetFromStart, then the offsetMs
   * field represents an offset from the start of the video. If the value is
   * offsetFromEnd, then the offsetMs field represents an offset from the end of
   * the video.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const InvideoTiming&);
};  // InvideoTiming
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_INVIDEO_TIMING_H_
