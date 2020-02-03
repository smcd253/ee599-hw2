#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    std::vector<int> input = {1, 2, 3, 3, 4, 5, 6, 6};
    std::vector<int>::iterator it;

    std::cout << "************** Remove Duplicates Without Set Filter **************" << std::endl;
    std::cout << "input vector = {";
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
    solution.remove_duplicates_raw(input);    
    std::cout << "output vector = {";
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
     
    std::cout << "************** Remove Duplicates With Set Filter **************" << std::endl;
    input = {1, 2, 3, 3, 4, 5, 6, 6};
    std::cout << "input vector = {";
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
    solution.remove_duplicates(input);    
    std::cout << "output vector = {";
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

    std::cout << " ************** Reverse Vector **************" << std::endl;
    std::cout << "input vector = {";
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
    solution.reverse(input);    
    std::cout << "output vector = {";
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

    std::cout << "************** Remove Odds **************" << std::endl;
    std::cout << "input vector = {";
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
    solution.remove_odds(input);
    std::cout << "output vector = {";
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

    std::cout << "************** Concatenate ************** " << std::endl;
    std::vector<int> input2 = {1, 2, 3, 4};
    std::vector<int> result = solution.concat(input, input2);    
    std::cout << "Concat Vector = {";
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

    std::cout << "************** Intersection **************" << std::endl;
    result = solution.intersection(input, input2);    
    std::cout << "Intersect Vector = {";
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