#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(REVERSE_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 4, 5};
  std::vector<int> actual = solution.reverse(my_vector);
  std::vector<int> expected = {5, 4, 3, 2, 1};
  EXPECT_EQ(expected, actual);
}