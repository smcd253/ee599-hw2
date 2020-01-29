#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> duplicates = {1, 2, 3, 3, 4, 5, 6, 6};
    std::vector<int>::iterator it;

    std::cout << "Remove Duplicates Without Set Filter: " << std::endl;
    std::vector<int> no_duplicates = solution.remove_duplicates_raw(duplicates);    
    std::cout << "duplicate array = {";
    for(it = duplicates.begin(); it != duplicates.end(); it++)
    {
        if (it < duplicates.end() - 1)
        {
            std::cout << std::to_string(*it) << ", ";
        }
        else
        {
            std::cout << std::to_string(*it) << "}" << std::endl;
        }
        
    }
    
    std::cout << "non-duplicate array = {";
    for(it = no_duplicates.begin(); it != no_duplicates.end(); it++)
    {
        if (it < no_duplicates.end() - 1)
        {
            std::cout << std::to_string(*it) << ", ";
        }
        else
        {
            std::cout << std::to_string(*it) << "}" << std::endl;
        }
        
    }
     
    std::cout << "Remove Duplicates With Set Filter: " << std::endl;
    no_duplicates = solution.remove_duplicates(duplicates);    
    std::cout << "duplicate array = {";
    for(it = duplicates.begin(); it != duplicates.end(); it++)
    {
        if (it < duplicates.end() - 1)
        {
            std::cout << std::to_string(*it) << ", ";
        }
        else
        {
            std::cout << std::to_string(*it) << "}" << std::endl;
        }
        
    }
    
    std::cout << "non-duplicate array = {";
    for(it = no_duplicates.begin(); it != no_duplicates.end(); it++)
    {
        if (it < no_duplicates.end() - 1)
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