#include "solution.h"
#include <algorithm>
#include <cctype>

std::string reverse(std::string input)
{
  std::string result;
  std::string::iterator it_in;
  for (it_in = input.begin(); it_in != input.end(); it_in++)
  {
      result.insert(result.begin(), *it_in);
  }

  return result;
}

bool Solution::palindrome(std::string input)
{
  // input validation
  if (input.empty())
  {
    return false;
  }

  // check palindrome
  std::string rev = reverse(input);

  if(input.compare(rev) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

std::string clean(std::string input)
{
  std::string result;
  std::string::iterator it;

  for (it = input.begin(); it != input.end(); it++)
  {
    // remove punctuation, spaces, and special characters
    if(std::isalpha(*it))
    {
      // convert uppercase to lowercase
      if(*it <= 90)
      {
        result.push_back(*it + 32);
      }
      else
      {
        result.push_back(*it);
      }
    }
  }
  return result;
}

bool Solution::approx_palindrome(std::string input)
{
  // input validation
  if (input.empty())
  {
    return false;
  }

  // clean input (remove spaces and punctuation)
  std::string input_clean = clean(input);
  if (input_clean.empty())
  {
    return false;
  }
  // reverse input and compare
  std::string result = reverse(input_clean);

  if(result.compare(input_clean) == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}