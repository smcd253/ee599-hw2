#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <map>

class Solution {
  private:
    std::map<char, char> my_map;
    bool create_mapping(char c_from, char c_to);

  public:
    std::vector<std::string> find_mapping(std::string from, std::string to);
};

#endif