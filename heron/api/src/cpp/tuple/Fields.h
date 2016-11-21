// Copyright 2016 Twitter. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __HERON_FIELDS_H_
#define __HERON_FIELDS_H_

#include<vector>
#include<string>
#include<unordered_map>

#include "Tuple.h"
#include "types/types.h"

class Fields {
 public:
  explicit Fields(std::vector<std::string> pFields);

  std::vector<std::shared_ptr<Element> > select(Fields selector, Tuple tuple);

  int size();

  std::string get(int index);

  /**
   * Returns the position of the specified field.
   */
  int fieldIndex(std::string field);

  /**
   * Returns true if this contains the specified name of the field.
   */
  bool contains(std::string field);

 private:
  void index();

  std::int64_t serialVersionUID = -1045737418722082345L;

  std::vector<std::string> fields;
  std::unordered_map<std::string, int> mIndex;
};
#endif
