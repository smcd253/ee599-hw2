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

TEST(SWAP_TEST, EMPTY_RIGHT_INDEX) {
  Solution solution;
  std::string test = "";
  std::string expected = "invalid";
  std::string actual = solution.swap(test, 0, 0);
  EXPECT_EQ(expected, actual);
}

TEST(SWAP_TEST, EMPTY_WRONG_INDEX) {
  Solution solution;
  std::string test = "";
  std::string expected = "invalid";
  std::string actual = solution.swap(test, 0, 1);
  EXPECT_EQ(expected, actual);
}

TEST(SWAP_TEST, WRONG_INDEX_OVER) {
  Solution solution;
  std::string test = "test";
  std::string expected = "invalid";
  std::string actual = solution.swap(test, 0, 5);
  EXPECT_EQ(expected, actual);
}

TEST(SWAP_TEST, WRONG_INDEX_NEG) {
  Solution solution;
  std::string test = "test";
  std::string expected = "invalid";
  std::string actual = solution.swap(test, -1, 2);
  EXPECT_EQ(expected, actual);
}

// TEST(SWAP_TEST, STRING_TOO_LARGE) {
//   Solution solution;
//   std::string input;
//   for (int i = 0; i < input.max_size(); i++)
//   {
//     input.append("a");
//   }
//   std::string actual = solution.swap(input, 0, 1);
//   std::string expected = "invalid";
//   EXPECT_EQ(expected, actual);
// }

TEST(REVERSE_TEST, STANDARD) {
  Solution solution;
  std::string test = "test";
  std::string expected = "tset";
  std::string actual = solution.reverse(test);
  EXPECT_EQ(expected, actual);
}

TEST(REVERSE_TEST, EMPTY) {
  Solution solution;
  std::string test = "";
  std::string expected = "";
  std::string actual = solution.reverse(test);
  EXPECT_EQ(expected, actual);
}

TEST(REVERSE_TEST, LEADING_SPACE) {
  Solution solution;
  std::string test = " test";
  std::string expected = "tset ";
  std::string actual = solution.reverse(test);
  EXPECT_EQ(expected, actual);
}
TEST(REVERSE_TEST, TRAILING_SPACE) {
  Solution solution;
  std::string test = "test ";
  std::string expected = " tset";
  std::string actual = solution.reverse(test);
  EXPECT_EQ(expected, actual);
}