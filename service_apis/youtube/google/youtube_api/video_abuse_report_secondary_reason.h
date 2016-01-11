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

// This code was generated by google-apis-code-generator 1.5.1
//   C++ generator version: 0.1.3

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   YouTube Data API (youtube/v3)
// Generated from:
//   Version: v3
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.3
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_SECONDARY_REASON_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_SECONDARY_REASON_H_

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
class VideoAbuseReportSecondaryReason : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoAbuseReportSecondaryReason* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAbuseReportSecondaryReason(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoAbuseReportSecondaryReason(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoAbuseReportSecondaryReason();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoAbuseReportSecondaryReason</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoAbuseReportSecondaryReason");
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of this abuse report secondary reason.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>label</code>' attribute was set.
   *
   * @return true if the '<code>label</code>' attribute was set.
   */
  bool has_label() const {
    return Storage().isMember("label");
  }

  /**
   * Clears the '<code>label</code>' attribute.
   */
  void clear_label() {
    MutableStorage()->removeMember("label");
  }


  /**
   * Get the value of the '<code>label</code>' attribute.
   */
  const StringPiece get_label() const {
    const Json::Value& v = Storage("label");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>label</code>' attribute.
   *
   * The localized label for this abuse report secondary reason.
   *
   * @param[in] value The new value.
   */
  void set_label(const StringPiece& value) {
    *MutableStorage("label") = value.data();
  }

 private:
  void operator=(const VideoAbuseReportSecondaryReason&);
};  // VideoAbuseReportSecondaryReason
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_ABUSE_REPORT_SECONDARY_REASON_H_