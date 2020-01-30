#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
#include <set>

class Solution {
public:
    std::vector<int> remove_duplicates(std::vector<int> has_duplicates);
    std::vector<int> remove_duplicates_raw(std::vector<int> has_duplicates);

    std::vector<int> reverse(std::vector<int> input);

    std::vector<int> remove_odds(std::vector<int> input);
    
    std::vector<int> concat(std::vector<int> input1, std::vector<int> input2);

    std::vector<int> __union__(std::vector<int> input1, std::vector<int> input2);
};

#endif