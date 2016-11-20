/*
 * Copyright 2015 Twitter, Inc.
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

#include <unordered_map>
#include <string>
class IComponent {
 public:
    // TODO(vidit-bhatia) : declareOutputFields(OutputFieldsDeclarer)
    // will be done when we define OutPutFieldsDeclarer.
    virtual void declareOutputFields() = 0;
    // TODO(vidit-bhatia) : can we change the map with generic type
    virtual std::unordered_map<std::string, std::string> getComponentConfiguration() = 0;
};