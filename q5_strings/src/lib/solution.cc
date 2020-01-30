#include "solution.h"

std::string Solution::swap(std::string input, size_t ind1, size_t ind2)
{
  // input validation
  if(input.empty() ||
    ind1 >= input.size() ||
    ind2 >= input.size() ||
    abs(ind2 - ind1) > input.size())
  {
    return "invalid";
  }

  // swap
  std::string::iterator it = input.begin() + ind1;
  char temp;
  temp = input.at(ind1);
  input.replace(input.begin() + ind1, input.begin() + ind1 + 1, 1, input.at(ind2));
  input.replace(input.begin() + ind2, input.begin() + ind2 + 1, 1, temp);

  return input;
}

std::string Solution::reverse(std::string input)
{
  std::string result;
  std::string::iterator it_in;
  for (it_in = input.begin(); it_in != input.end(); it_in++)
  {
      result.insert(result.begin(), *it_in);
  }

  return result;
}