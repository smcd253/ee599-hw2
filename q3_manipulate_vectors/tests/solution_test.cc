#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(REMOVE_DUPLICATES_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 3, 4, 1, 5};
  std::vector<int> actual = solution.remove_duplicates(my_vector);
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, actual);
}
TEST(REMOVE_DUPLICATES_RAW_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 3, 4, 1, 5};
  std::vector<int> actual = solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, actual);
}

TEST(REVERSE_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 4, 5};
  std::vector<int> actual = solution.reverse(my_vector);
  std::vector<int> expected = {5, 4, 3, 2, 1};
  EXPECT_EQ(expected, actual);
}

TEST(REMOVE_ODDS_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 4, 5};
  std::vector<int> actual = solution.remove_odds(my_vector);
  std::vector<int> expected = {2, 4};
  EXPECT_EQ(expected, actual);
}

TEST(CONCAT_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector1 = {1, 2, 3, 4, 5};
  std::vector<int> my_vector2 = {6, 7, 8, 9, 10};
  std::vector<int> actual = solution.concat(my_vector1, my_vector2);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  EXPECT_EQ(expected, actual);
}

TEST(UNION_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector1 = {1, 2, 3, 4, 5};
  std::vector<int> my_vector2 = {5, 6, 7, 1, 10};
  std::vector<int> actual = solution.__union__(my_vector1, my_vector2);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 10};
  EXPECT_EQ(expected, actual);
}