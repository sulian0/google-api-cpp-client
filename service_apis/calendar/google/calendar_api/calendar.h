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
//   on: 2015-03-19, 15:57:48 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 121
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_CALENDAR_API_CALENDAR_H_
#define  GOOGLE_CALENDAR_API_CALENDAR_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class Calendar : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Calendar* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Calendar(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Calendar(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Calendar();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::Calendar</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::Calendar");
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
   * Description of the calendar. Optional.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
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
   * ETag of the resource.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
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
   * Identifier of the calendar.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
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
   * Type of the resource ("calendar#calendar").
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>location</code>' attribute was set.
   *
   * @return true if the '<code>location</code>' attribute was set.
   */
  bool has_location() const {
    return Storage().isMember("location");
  }

  /**
   * Clears the '<code>location</code>' attribute.
   */
  void clear_location() {
    MutableStorage()->removeMember("location");
  }


  /**
   * Get the value of the '<code>location</code>' attribute.
   */
  const StringPiece get_location() const {
    const Json::Value& v = Storage("location");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>location</code>' attribute.
   *
   * Geographic location of the calendar as free-form text. Optional.
   *
   * @param[in] value The new value.
   */
  void set_location(const StringPiece& value) {
    *MutableStorage("location") = value.data();
  }

  /**
   * Determine if the '<code>summary</code>' attribute was set.
   *
   * @return true if the '<code>summary</code>' attribute was set.
   */
  bool has_summary() const {
    return Storage().isMember("summary");
  }

  /**
   * Clears the '<code>summary</code>' attribute.
   */
  void clear_summary() {
    MutableStorage()->removeMember("summary");
  }


  /**
   * Get the value of the '<code>summary</code>' attribute.
   */
  const StringPiece get_summary() const {
    const Json::Value& v = Storage("summary");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>summary</code>' attribute.
   *
   * Title of the calendar.
   *
   * @param[in] value The new value.
   */
  void set_summary(const StringPiece& value) {
    *MutableStorage("summary") = value.data();
  }

  /**
   * Determine if the '<code>timeZone</code>' attribute was set.
   *
   * @return true if the '<code>timeZone</code>' attribute was set.
   */
  bool has_time_zone() const {
    return Storage().isMember("timeZone");
  }

  /**
   * Clears the '<code>timeZone</code>' attribute.
   */
  void clear_time_zone() {
    MutableStorage()->removeMember("timeZone");
  }


  /**
   * Get the value of the '<code>timeZone</code>' attribute.
   */
  const StringPiece get_time_zone() const {
    const Json::Value& v = Storage("timeZone");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>timeZone</code>' attribute.
   *
   * The time zone of the calendar. (Formatted as an IANA Time Zone Database
   * name, e.g. "Europe/Zurich".) Optional.
   *
   * @param[in] value The new value.
   */
  void set_time_zone(const StringPiece& value) {
    *MutableStorage("timeZone") = value.data();
  }

 private:
  void operator=(const Calendar&);
};  // Calendar
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_CALENDAR_H_
