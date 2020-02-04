#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

/********************* Solution::remove_duplicates() *********************/
TEST(REMOVE_DUPLICATES_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 3, 4, 1, 5};
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_TEST, EMPTY) {
  Solution solution;
  std::vector<int> my_vector = {};
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_TEST, SINGLETON) {
  Solution solution;
  std::vector<int> my_vector = {1};
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_TEST, DOUBLE_ENTRY) {
  Solution solution;
  std::vector<int> my_vector = {1, 1};
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_TEST, NEGATIVES) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, -3, 4, 1, 5};
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {-3, 1, 2, 3, 4, 5};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_TEST, LARGE) {
  Solution solution;
  std::vector<int> my_vector;
  for (int i = 0; i < INT16_MAX; i++)
  {
    my_vector.push_back(1);
  }
  solution.remove_duplicates(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

/********************* Solution::remove_duplicates_raw() *********************/
TEST(REMOVE_DUPLICATES_RAW_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 3, 4, 1, 5};
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_RAW_TEST, EMPTY) {
  Solution solution;
  std::vector<int> my_vector = {};
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_RAW_TEST, SINGLETON) {
  Solution solution;
  std::vector<int> my_vector = {1};
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_RAW_TEST, DOUBLE_ENTRY) {
  Solution solution;
  std::vector<int> my_vector = {1, 1};
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_RAW_TEST, NEGATIVES) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, -3, 4, 1, 5};
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1, 2, 3, -3, 4, 5};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_DUPLICATES_RAW_TEST, LARGE) {
  Solution solution;
  std::vector<int> my_vector;
  for (int i = 0; i < INT16_MAX; i++)
  {
    my_vector.push_back(1);
  }
  solution.remove_duplicates_raw(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

/********************* Solution::reverse() *********************/
TEST(REVERSE_TEST, STANDARD_ODD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 4, 5};
  solution.reverse(my_vector);
  std::vector<int> expected = {5, 4, 3, 2, 1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, STANDARD_EVEN) {
  Solution solution;
  std::vector<int> my_vector = {0, 1, 2, 3, 4, 5};
  solution.reverse(my_vector);
  std::vector<int> expected = {5, 4, 3, 2, 1, 0};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, EMPTY) {
  Solution solution;
  std::vector<int> my_vector = {};
  solution.reverse(my_vector);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, SINGLETON) {
  Solution solution;
  std::vector<int> my_vector = {1};
  solution.reverse(my_vector);
  std::vector<int> expected = {1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, DOUBLE_ENTRY) {
  Solution solution;
  std::vector<int> my_vector = {1, 2};
  solution.reverse(my_vector);
  std::vector<int> expected = {2, 1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, NEGATIVES) {
  Solution solution;
  std::vector<int> my_vector = {-1, -2, -3};
  solution.reverse(my_vector);
  std::vector<int> expected = {-3, -2, -1};
  EXPECT_EQ(expected, my_vector);
}

TEST(REVERSE_TEST, LARGE) {
  Solution solution;
  std::vector<int> my_vector;
  std::vector<int> expected;
  for (int i = 0; i < INT8_MAX; i++)
  {
    my_vector.push_back(i);
  }
  for (int i = INT8_MAX - 1; i >= 0; i--)
  {
    expected.push_back(i);
  }
  solution.reverse(my_vector);
  EXPECT_EQ(expected, my_vector);
}

/********************* Solution::remove_odds() *********************/
TEST(REMOVE_ODDS_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector = {1, 2, 3, 4, 5};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {2, 4};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, EVEN_ONLY) {
  Solution solution;
  std::vector<int> my_vector = {0, 2, 4};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {0, 2, 4};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, EMPTY) {
  Solution solution;
  std::vector<int> my_vector = {};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, SINGLETON) {
  Solution solution;
  std::vector<int> my_vector = {1};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, DOUBLE_ENTRY) {
  Solution solution;
  std::vector<int> my_vector = {1, 2};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {2};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, NEGATIVES) {
  Solution solution;
  std::vector<int> my_vector = {-2, -3, -4};
  solution.remove_odds(my_vector);
  std::vector<int> expected = {-2, -4};
  EXPECT_EQ(expected, my_vector);
}

TEST(REMOVE_ODDS_TEST, LARGE) {
  Solution solution;
  std::vector<int> my_vector;
  std::vector<int> expected;
  for (int i = 0; i < INT8_MAX; i++)
  {
    my_vector.push_back(i);
  }
  for (int i = 0; i < INT8_MAX; i++)
  {
    if (i % 2 == 0)
    {
      expected.push_back(i);
    }
  }
  solution.remove_odds(my_vector);
  EXPECT_EQ(expected, my_vector);
}
/********************* Solution::concat() *********************/
TEST(CONCAT_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector1 = {1, 2, 3, 4, 5};
  std::vector<int> my_vector2 = {6, 7, 8, 9, 10};
  std::vector<int> actual = solution.concat(my_vector1, my_vector2);
  std::vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  EXPECT_EQ(expected, actual);
}

/********************* Solution::remove_duplicates() *********************/
TEST(INTERSECTION_TEST, STANDARD) {
  Solution solution;
  std::vector<int> my_vector1 = {1, 2, 3, 4, 5};
  std::vector<int> my_vector2 = {5, 6, 7, 1, 10};
  std::vector<int> actual = solution.intersection(my_vector1, my_vector2);
  std::vector<int> expected = {1, 5};
  EXPECT_EQ(expected, actual);
}