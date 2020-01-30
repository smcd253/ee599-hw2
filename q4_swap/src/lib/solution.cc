#include "solution.h"

void Solution::swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
void Solution::swap(int* a, int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}