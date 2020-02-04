#include "solution.h"

// overload 1
int Solution::add(int a, int b)
{
  int result = a + b;
  // handle overflow
  if (a > 0 && b > 0 && result < 0)
  {
    result = INT32_MAX;
  }
  else if (a < 0 && b < 0 && result > 0)
  {
    result = INT32_MIN;
  }
  return result;
}

// overload 2
std::string Solution::add(std::string a, std::string b)
{
  return a.append(b);
}

// overload 3
std::string Solution::add(std::string a, int b)
{
  return a.append(std::to_string(b));
}

// overload 4
std::string Solution::add(int a, std::string b)
{
  return std::to_string(a).append(b);
}
