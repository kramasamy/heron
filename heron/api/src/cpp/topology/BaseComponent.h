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
// This is the base interface which should be implemented by each component.
//
///////////////////////////////////////////////////////////////////////////////

#include "IComponent.h"
#include <unordered_map>
#include <string>
class BaseComponent : public IComponent {
 public:
    std::unordered_map<std::string, std::string> getComponentConfiguration();
    
 private:
  int64_t serialVersionUID = 4922360537045442614L;
};
