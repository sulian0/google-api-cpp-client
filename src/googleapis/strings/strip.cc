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

// based on contributions of various authors in strings/strutil_unittest.cc
//
// This file contains functions that remove a defined part from the string,
// i.e., strip the string.

#include "googleapis/strings/strip.h"

#include <assert.h>
#include <string.h>
#include <algorithm>
#include <string>
using std::string;

#include "googleapis/strings/ascii_ctype.h"
#include "googleapis/strings/stringpiece.h"

namespace googleapis {

string StripPrefixString(StringPiece str, StringPiece prefix) {
  if (str.starts_with(prefix)) str.remove_prefix(prefix.length());
  return str.as_string();
}

bool TryStripPrefixString(StringPiece str, StringPiece prefix, string* result) {
  const bool has_prefix = str.starts_with(prefix);
  if (has_prefix) str.remove_prefix(prefix.length());
  str.as_string().swap(*result);
  return has_prefix;
}

string StripSuffixString(StringPiece str, StringPiece suffix) {
  if (str.ends_with(suffix)) str.remove_suffix(suffix.length());
  return str.as_string();
}

bool TryStripSuffixString(StringPiece str, StringPiece suffix, string* result) {
  const bool has_suffix = str.ends_with(suffix);
  if (has_suffix) str.remove_suffix(suffix.length());
  str.as_string().swap(*result);
  return has_suffix;
}

// ----------------------------------------------------------------------
// StripString
//    Replaces any occurrence of the character 'remove' (or the characters
//    in 'remove') with the character 'replacewith'.
// ----------------------------------------------------------------------
void StripString(char* str, StringPiece remove, char replacewith) {
  for (; *str != '\0'; ++str) {
    if (remove.find(*str) != StringPiece::npos) {
      *str = replacewith;
    }
  }
}

void StripString(char* str, int len, StringPiece remove, char replacewith) {
  char* end = str + len;
  for (; str < end; ++str) {
    if (remove.find(*str) != StringPiece::npos) {
      *str = replacewith;
    }
  }
}

void StripString(string* s, StringPiece remove, char replacewith) {
  for (string::iterator it = s->begin(), end = s->end(); it != end; ++it) {
    if (remove.find(*it) != StringPiece::npos) {
      *it = replacewith;
    }
  }
}

// ----------------------------------------------------------------------
// StripWhitespace
// ----------------------------------------------------------------------
void StripWhitespace(const char** str, int* len) {
  // strip off trailing whitespace
  while ((*len) > 0 && ascii_isspace((*str)[(*len) - 1])) {
    (*len)--;
  }

  // strip off leading whitespace
  while ((*len) > 0 && ascii_isspace((*str)[0])) {
    (*len)--;
    (*str)++;
  }
}

bool StripTrailingNewline(string* s) {
  if (!s->empty() && (*s)[s->size() - 1] == '\n') {
    if (s->size() > 1 && (*s)[s->size() - 2] == '\r')
      s->resize(s->size() - 2);
    else
      s->resize(s->size() - 1);
    return true;
  }
  return false;
}

void StripWhitespace(string* str) {
  size_t str_length = str->length();

  // Strip off leading whitespace.
  size_t first = 0;
  while (first < str_length && ascii_isspace(str->at(first))) {
    ++first;
  }
  // If entire string is white space.
  if (first == str_length) {
    str->clear();
    return;
  }
  if (first > 0) {
    str->erase(0, first);
    str_length -= first;
  }

  // Strip off trailing whitespace.
  // Here, the string is not empty and the first character is not whitespace.
  size_t last = str_length - 1;
  while (ascii_isspace(str->at(last))) {
    --last;
  }
  if (last != (str_length - 1)) {
    str->erase(last + 1, string::npos);
  }
}

// ----------------------------------------------------------------------
// Misc. stripping routines
// ----------------------------------------------------------------------
void StripCurlyBraces(string* s) {
  return StripBrackets('{', '}', s);
}

void StripBrackets(char left, char right, string* s) {
  string::iterator opencurly = std::find(s->begin(), s->end(), left);
  while (opencurly != s->end()) {
    string::iterator closecurly = std::find(opencurly, s->end(), right);
    if (closecurly == s->end()) return;
    opencurly = s->erase(opencurly, closecurly + 1);
    opencurly = std::find(opencurly, s->end(), left);
  }
}

void StripMarkupTags(string* s) {
  string::iterator output = std::find(s->begin(), s->end(), '<');
  string::iterator input = output;
  while (input != s->end()) {
    if (*input == '<') {
      input = std::find(input, s->end(), '>');
      if (input == s->end()) break;
      ++input;
    } else {
      *output++ = *input++;
    }
  }
  s->resize(output - s->begin());
}

string OutputWithMarkupTagsStripped(const string& s) {
  string result(s);
  StripMarkupTags(&result);
  return result;
}

int TrimStringLeft(string* s, StringPiece remove) {
  int i = 0;
  while (i < s->size() && memchr(remove.data(), (*s)[i], remove.size())) {
    ++i;
  }
  if (i > 0) s->erase(0, i);
  return i;
}

int TrimStringRight(string* s, StringPiece remove) {
  int i = s->size(), trimmed = 0;
  while (i > 0 && memchr(remove.data(), (*s)[i - 1], remove.size())) {
    --i;
  }
  if (i < s->size()) {
    trimmed = s->size() - i;
    s->erase(i);
  }
  return trimmed;
}

// ----------------------------------------------------------------------
// Various removal routines
// ----------------------------------------------------------------------
int strrm(char* str, char c) {
  char* src;
  char* dest;
  for (src = dest = str; *src != '\0'; ++src)
    if (*src != c) *(dest++) = *src;
  *dest = '\0';
  return dest - str;
}

int memrm(char* str, int strlen, char c) {
  char* src;
  char* dest;
  for (src = dest = str; strlen-- > 0; ++src)
    if (*src != c) *(dest++) = *src;
  return dest - str;
}

int strrmm(char* str, const char* chars) {
  char* src;
  char* dest;
  for (src = dest = str; *src != '\0'; ++src) {
    bool skip = false;
    for (const char* c = chars; *c != '\0'; c++) {
      if (*src == *c) {
        skip = true;
        break;
      }
    }
    if (!skip) *(dest++) = *src;
  }
  *dest = '\0';
  return dest - str;
}

int strrmm(string* str, const string& chars) {
  size_t str_len = str->length();
  size_t in_index = str->find_first_of(chars);
  if (in_index == string::npos) return str_len;

  size_t out_index = in_index++;

  while (in_index < str_len) {
    char c = (*str)[in_index++];
    if (chars.find(c) == string::npos) (*str)[out_index++] = c;
  }

  str->resize(out_index);
  return out_index;
}

// ----------------------------------------------------------------------
// StripDupCharacters
//    Replaces any repeated occurrence of the character 'dup_char'
//    with single occurrence.  e.g.,
//       StripDupCharacters("a//b/c//d", '/', 0) => "a/b/c/d"
//    Return the number of characters removed
// ----------------------------------------------------------------------
int StripDupCharacters(string* s, char dup_char, int start_pos) {
  if (start_pos < 0) start_pos = 0;

  // remove dups by compaction in-place
  int input_pos = start_pos;   // current reader position
  int output_pos = start_pos;  // current writer position
  const int input_end = s->size();
  while (input_pos < input_end) {
    // keep current character
    const char curr_char = (*s)[input_pos];
    if (output_pos != input_pos)  // must copy
      (*s)[output_pos] = curr_char;
    ++input_pos;
    ++output_pos;

    if (curr_char == dup_char) {  // skip subsequent dups
      while ((input_pos < input_end) && ((*s)[input_pos] == dup_char))
        ++input_pos;
    }
  }
  const int num_deleted = input_pos - output_pos;
  s->resize(s->size() - num_deleted);
  return num_deleted;
}

// ----------------------------------------------------------------------
// RemoveExtraWhitespace()
//   Remove leading, trailing, and duplicate internal whitespace.
// ----------------------------------------------------------------------
void RemoveExtraWhitespace(string* s) {
  assert(s != NULL);
  // Empty strings clearly have no whitespace, and this code assumes that
  // string length is greater than 0
  if (s->empty()) return;

  size_t input_pos = 0;   // current reader position
  size_t output_pos = 0;  // current writer position
  const size_t input_end = s->size();
  // Strip off leading space
  while (input_pos < input_end && ascii_isspace((*s)[input_pos])) input_pos++;

  while (input_pos < input_end - 1) {
    char c = (*s)[input_pos];
    char next = (*s)[input_pos + 1];
    // Copy each non-whitespace character to the right position.
    // For a block of whitespace, print the last one.
    if (!ascii_isspace(c) || !ascii_isspace(next)) {
      if (output_pos != input_pos) {  // only copy if needed
        (*s)[output_pos] = c;
      }
      output_pos++;
    }
    input_pos++;
  }
  // Pick up the last character if needed.
  char c = (*s)[input_end - 1];
  if (!ascii_isspace(c)) (*s)[output_pos++] = c;

  s->resize(output_pos);
}

//------------------------------------------------------------------------
// See comment in header file for a complete description.
//------------------------------------------------------------------------
void StripLeadingWhitespace(string* str) {
  char const* const leading = StripLeadingWhitespace(
      const_cast<char*>(str->c_str()));
  if (leading != NULL) {
    string const tmp(leading);
    str->assign(tmp);
  } else {
    str->assign("");
  }
}

void StripTrailingWhitespace(string* const s) {
  string::size_type i;
  for (i = s->size(); i > 0 && ascii_isspace((*s)[i - 1]); --i) {
  }

  s->resize(i);
}

// ----------------------------------------------------------------------
// TrimRunsInString
//    Removes leading and trailing runs, and collapses middle
//    runs of a set of characters into a single character (the
//    first one specified in 'remove').  Useful for collapsing
//    runs of repeated delimiters, whitespace, etc.  E.g.,
//    TrimRunsInString(&s, " :,()") removes leading and trailing
//    delimiter chars and collapses and converts internal runs
//    of delimiters to single ' ' characters, so, for example,
//    "  a:(b):c  " -> "a b c"
//    "first,last::(area)phone, ::zip" -> "first last area phone zip"
// ----------------------------------------------------------------------
void TrimRunsInString(string* s, StringPiece remove) {
  string::iterator dest = s->begin();
  string::iterator src_end = s->end();
  for (string::iterator src = s->begin(); src != src_end;) {
    if (remove.find(*src) == StringPiece::npos) {
      *(dest++) = *(src++);
    } else {
      // Skip to the end of this run of chars that are in 'remove'.
      for (++src; src != src_end; ++src) {
        if (remove.find(*src) == StringPiece::npos) {
          if (dest != s->begin()) {
            // This is an internal run; collapse it.
            *(dest++) = remove[0];
          }
          *(dest++) = *(src++);
          break;
        }
      }
    }
  }
  s->erase(dest, src_end);
}

// ----------------------------------------------------------------------
// RemoveNullsInString
//    Removes any internal \0 characters from the string.
// ----------------------------------------------------------------------
void RemoveNullsInString(string* s) {
  s->erase(std::remove(s->begin(), s->end(), '\0'), s->end());
}

}  // namespace googleapis
