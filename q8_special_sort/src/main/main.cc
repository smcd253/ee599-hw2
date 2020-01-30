#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> input = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    std::vector<int>::iterator it;

    std::vector<int> result = solution.special_sort(input);    
    std::cout << "input = {";
    for(it = input.begin(); it != input.end(); it++)
    {
        if (it < input.end() - 1)
        {
            std::cout << std::to_string(*it) << ", ";
        }
        else
        {
            std::cout << std::to_string(*it) << "}" << std::endl;
        }
        
    }
    
    std::cout << "result = {";
    for(it = result.begin(); it != result.end(); it++)
    {
        if (it < result.end() - 1)
        {
            std::cout << std::to_string(*it) << ", ";
        }
        else
        {
            std::cout << std::to_string(*it) << "}" << std::endl;
        }
        
    }
     
    return EXIT_SUCCESS;
}