#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
    private:
        std::vector<int> reverse(std::vector<int> input);
    public:
        std::vector<int> special_sort(std::vector<int> input);
};

#endif