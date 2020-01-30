#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(PALINDROME_TEST, STANDARD_TRUE) {
  Solution solution;
  std::string test = "racecar";
  bool expected = true;
  bool actual = solution.palindrome(test);
  EXPECT_EQ(expected, actual);
}

TEST(PALINDROME_TEST, STANDARD_FALSE) {
  Solution solution;
  std::string test = "spencer";
  bool expected = false;
  bool actual = solution.palindrome(test);
  EXPECT_EQ(expected, actual);
}

TEST(APPROX_PALINBDROME_TEST, PROVIDED_TEST_CASE1_TRUE) {
  Solution solution;
  std::string test = "\"A man, a plan, a canal, Panama!\"";
  bool expected = true;
  bool actual = solution.approx_palindrome(test);
  EXPECT_EQ(expected, actual);
}

TEST(APPROX_PALINBDROME_TEST, PROVIDED_TEST_CASE2_TRUE) {
  Solution solution;
  std::string test = "\"Was it a car or a cat I saw?\"";
  bool expected = true;
  bool actual = solution.approx_palindrome(test);
  EXPECT_EQ(expected, actual);
}

TEST(APPROX_PALINBDROME_TEST, PROVIDED_TEST_CASE3_TRUE) {
  Solution solution;
  std::string test = "\"No 'x' in Nixon\"";
  bool expected = true;
  bool actual = solution.approx_palindrome(test);
  EXPECT_EQ(expected, actual);
}

TEST(APPROX_PALINBDROME_TEST, STANDARD_FALSE) {
  Solution solution;
  std::string test = "\"iS 'tHis' a pAlinDrome?!\"";
  bool expected = false;
  bool actual = solution.approx_palindrome(test);
  EXPECT_EQ(expected, actual);
}
