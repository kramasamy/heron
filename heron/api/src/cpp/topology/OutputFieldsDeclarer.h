/*
 * Copyright 2016 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

///////////////////////////////////////////////////////////////////////////////
//
// This is the base interface for all the components in Heron and has the
// functions defined for a component to work.
//
///////////////////////////////////////////////////////////////////////////////

#ifndef __OUTPUT_FIELDS_DECLARER_H_
#define __OUTPUT_FIELDS_DECLARER_H_

#include <string>

#include "tuple/Fields.h"

class OutputFieldsDeclarer {
 public:
  /**
   * Uses default stream id.
   */
  void declare(Fields fields);

  void declare(bool direct, Fields fields);

  void declareStream(std::string streamId, Fields fields);

  void declareStream(std::string streamId, bool direct, Fields fields);
};

#endif