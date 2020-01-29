#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(ADD_TEST, OVERLOAD1_ADD_INTS) {
  Solution solution;
  int a = 1;
  int b = 2;
  int actual = solution.add(a, b);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(ADD_TEST, OVERLOAD2_ADD_STRINGS) {
  Solution solution;
  std::string a = "a";
  std::string b = "b";
  std::string actual = solution.add(a, b);
  std::string expected = "ab";
  EXPECT_EQ(expected, actual);
}

TEST(ADD_TEST, OVERLOAD3_ADD_STRING_INT) {
  Solution solution;
  std::string a = "a";
  int b = 1;
  std::string actual = solution.add(a, b);
  std::string expected = "a1";
  EXPECT_EQ(expected, actual);
}

TEST(ADD_TEST, OVERLOAD4_ADD_INT_STRING) {
  Solution solution;
  int a = 1;
  std::string b = "b";
  std::string actual = solution.add(a, b);
  std::string expected = "1b";
  EXPECT_EQ(expected, actual);
}