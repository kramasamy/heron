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
#include "gtest/gtest.h"
#include "types/types.h"

namespace heron {
namespace api {

class BasicTypesTest : public ::testing::Test {

public:
  BasicTypesTest() {}
  ~BasicTypesTest() {}

  void SetUp() { 
    std::make_shared<Element>(new Int(15));
    std::make_shared<Element>(new Double(3.14159));
    std::make_shared<Element>(new String("Jordi"));
  }

  void TearDown() {/* The shared pointer will deallocate the memory */}

 protected:
  std::shared_ptr<Element> eInt;
  std::shared_ptr<Element> eDouble;
  std::shared_ptr<Element> eString; 

};

TEST_F(BasicTypesTest, testCastingTypes) {

  auto myInt =
    std::static_pointer_cast<Int>(eInt);
  auto myDouble = 
    std::static_pointer_cast<Double>(eDouble);
  auto myString = 
    std::static_pointer_cast<String>(eString);

  EXPECT_EQ(myInt->getValue(), 15);
  EXPECT_DOUBLE_EQ(myDouble->getValue(), 3.14159);
  EXPECT_STREQ(myString->getValue(), "Jordi");
}

} // api
} // heron


int main(int argc, char **argv) {
  heron::common::Initialize(argv[0]);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
