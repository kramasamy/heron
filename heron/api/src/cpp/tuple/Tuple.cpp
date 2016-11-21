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

#include <string>
#include "Tuple.h"


std::shared_ptr<Element> Tuple::Get(std::string name) {
  return elements[name];
}

void Tuple::Set(std::string name, std::shared_ptr<Element> e) {
  elements[name] = e;
}

void Tuple::serialize(IPluggableSerializer *Serializer, std::stringstream &ss) {
  Serializer->serialize(ss, elements);
}

void Tuple::deserialize(IPluggableSerializer *Serializer, std::stringstream &ss) {
  Serializer->deserialize(ss, elements);
}