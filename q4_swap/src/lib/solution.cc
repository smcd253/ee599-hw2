#include "solution.h"

void Solution::swap(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}
void Solution::swap(int* a, int* b)
{
  if (a == nullptr || b == nullptr)
  {
    *a = -1;
    *b = -1;
  }
  
  int temp = *a;
  *a = *b;
  *b = temp;
}