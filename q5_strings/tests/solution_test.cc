#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SWAP_TEST, STANDARD) {
  Solution solution;
  std::string test = "test";
  std::string expected = "sett";
  std::string actual = solution.swap(test, 0, 2);
  EXPECT_EQ(expected, actual);
}