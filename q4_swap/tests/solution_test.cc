#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(REFERENCE_SWAP_TEST, STANDARD) {
  Solution solution;
  int a = 1;
  int b = 2;
  solution.swap(&a, &b);
  bool expected[] = {true, true};
  bool actual[] = {a == 2, b ==1}
  EXPECT_EQ(expected, actual);
}

TEST(POINTER_SWAP_TEST, STANDARD) {
  Solution solution;
  int a = 1;
  int b = 2;
  int *A = &a;
  int *B = &b;

  solution.swap(A, B);
  bool expected[] = {true, true};
  bool actual[] = {a == 2, b ==1}
  EXPECT_EQ(expected, actual);
}