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
// Description:
//   Programmatic access to YouTube features.
// Classes:
//   VideoPlayer
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/video_player.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
VideoPlayer* VideoPlayer::New() {
  return new client::JsonCppCapsule<VideoPlayer>;
}

// Standard immutable constructor.
VideoPlayer::VideoPlayer(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
VideoPlayer::VideoPlayer(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
VideoPlayer::~VideoPlayer() {
}
}  // namespace google_youtube_api
