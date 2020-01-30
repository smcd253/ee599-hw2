#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(SPECIAL_SORT_TEST, PROVIDED_TEST_CASE) {
  Solution solution;
  std::vector<int> input = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  std::vector<int> actual = solution.special_sort(input);
  std::vector<int> expected = {43, 43, 21, 10, 7, 0, 69, 900, 637, 500, 231, 123, 99};
  EXPECT_EQ(expected, actual);
}