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

#include <string>
#include "gtest/gtest.h"
#include "types/types.h"
#include "tuple/Tuple.h"

namespace heron {
namespace api {

class BasicTupleTest : public ::testing::Test {
 public:
  BasicTupleTest() {}
  ~BasicTupleTest() {}

  void SetUp() {
    eInt.reset(new Int(15));
    eDouble.reset(new Double(3.14159));
    eString.reset(new String("Jordi"));
  }

  void TearDown() {/* The shared pointer will deallocate the memory */}

 protected:
  std::shared_ptr<Element> eInt;
  std::shared_ptr<Element> eDouble;
  std::shared_ptr<Element> eString;
};

TEST_F(BasicTupleTest, testCastingTypes) {
  Tuple tuple;

  tuple.Set("Worker", eString);
  tuple.Set("Salary", eInt);
  tuple.Set("Phi", eDouble);

  auto Salary =
    std::static_pointer_cast<Int>(tuple.Get("Salary"));
  auto Phi =
    std::static_pointer_cast<Double>(tuple.Get("Phi"));
  auto Worker =
    std::static_pointer_cast<String>(tuple.Get("Worker"));

    EXPECT_EQ(Salary->getValue(), 15);
    EXPECT_EQ(Phi->getValue(), 3.14159);
    EXPECT_EQ((Worker->getValue()), "Jordi");
}
}  // namespace api
}  // namespace heron

// TODO(Jordi): Add test for Fields.h

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
