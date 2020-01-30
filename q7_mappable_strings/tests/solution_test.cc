#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(FIND_MAPPING_TEST, PROVIDED_TEST_CASE1) {
  Solution solution;
  std::string string1 = "add";
  std::string string2 = "egg";
  std::vector<std::string> expected_v = {"(a->e)", "(d->g)"};
  std::vector<std::string> actual_v = solution.find_mapping(string1, string2);
  bool expected = true;
  bool actual = true;
  for (size_t i = 0; i < expected_v.size(); i++)
  {
    if(expected_v[i].compare(actual_v[i]) != 0)
    {
      actual = false;
    }
  }
  EXPECT_EQ(expected, actual);
}

TEST(FIND_MAPPING_TEST, PROVIDED_TEST_CASE2) {
  Solution solution;
  std::string string1 = "extreme";
  std::string string2 = "egg";
  std::vector<std::string> expected_v = {};
  std::vector<std::string> actual_v = solution.find_mapping(string1, string2);
  bool expected = true;
  bool actual = true;
  for (size_t i = 0; i < expected_v.size(); i++)
  {
    if(expected_v[i].compare(actual_v[i]) != 0)
    {
      actual = false;
    }
  }
  EXPECT_EQ(expected, actual);
}

TEST(FIND_MAPPING_TEST, PROVIDED_TEST_CASE3) {
  Solution solution;
  std::string string1 = "harder";
  std::string string2 = "watiter";
  std::vector<std::string> expected_v = {};
  std::vector<std::string> actual_v = solution.find_mapping(string1, string2);
  bool expected = true;
  bool actual = true;
  for (size_t i = 0; i < expected_v.size(); i++)
  {
    if(expected_v[i].compare(actual_v[i]) != 0)
    {
      actual = false;
    }
  }
  EXPECT_EQ(expected, actual);
}

TEST(FIND_MAPPING_TEST, PROVIDED_TEST_CASE4) {
  Solution solution;
  std::string string1 = "aabbrr";
  std::string string2 = "ddeekk";
  std::vector<std::string> expected_v = {"(a->d)","(b->e)","(r->k)"};
  std::vector<std::string> actual_v = solution.find_mapping(string1, string2);
  bool expected = true;
  bool actual = true;
  for (size_t i = 0; i < expected_v.size(); i++)
  {
    if(expected_v[i].compare(actual_v[i]) != 0)
    {
      actual = false;
    }
  }
  EXPECT_EQ(expected, actual);
}