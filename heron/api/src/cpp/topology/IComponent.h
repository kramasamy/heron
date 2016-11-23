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

#ifndef __ICOMPONENT_H_
#define __ICOMPONENT_H_

#include <unordered_map>
#include <string>

#include "OutputFieldsDeclarer.h"

/**
 * Common methods for all possible components in a topology. This interface is used
 * when defining topologies using the Java API.
 */
class IComponent {
 public:
  /**
   * Declare the output schema for all the streams of this topology.
   *
   * @param declarer this is used to declare output stream ids, output fields, and whether or not each output stream is a direct stream
   */
  virtual void declareOutputFields(OutputFieldsDeclarer declarer) = 0;

  // TODO(vidit-bhatia) : can we change the map with generic type
  // TODO(Jordi): I do not know what is this for, any clue?
  virtual std::unordered_map<std::string, std::string> getComponentConfiguration() = 0;
};

#endif 
