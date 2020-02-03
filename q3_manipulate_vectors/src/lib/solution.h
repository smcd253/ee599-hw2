#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
#include <set>

class Solution {
public:
    void remove_duplicates(std::vector<int>& input);
    void remove_duplicates_raw(std::vector<int>& input);

    void reverse(std::vector<int>& input);

    void remove_odds(std::vector<int>& input);
    
    std::vector<int> concat(std::vector<int>& input1, std::vector<int>& input2);

    std::vector<int> intersection(std::vector<int>& input1, std::vector<int>& input2);
};

#endif