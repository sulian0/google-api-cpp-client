/*
 * \copyright Copyright 2013 Google Inc. All Rights Reserved.
 * \license @{
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * @}
 */

//
// Simple routines for splitting strings.

#ifndef GOOGLEAPIS_STRINGS_SPLIT_H_
#define GOOGLEAPIS_STRINGS_SPLIT_H_

#include <vector>
using std::vector;

#include "googleapis/strings/stringpiece.h"
namespace googleapis {

namespace strings {
std::vector<StringPiece> Split(const StringPiece& source,
                               const StringPiece& delim);
}  // namespace strings

}  // namespace googleapis
#endif  // GOOGLEAPIS_STRINGS_SPLIT_H_
