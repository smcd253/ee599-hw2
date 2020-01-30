#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;

    std::string string1 = "ababca";
    std::string string2 = "efefge";

    std::cout << "mapping of: " << std::endl;
    std::cout << string1 << " and" << std::endl;
    std::cout << string2 << std::endl;
    std::vector<std::string> result = solution.find_mapping(string1, string2);
    std::cout << "{";
    for (int i = 0; i < result.size(); i++)
    {
        if (i < result.size() - 1)
        {
            std::cout << result[i] << ", ";
        }
        else
        {
            std::cout << result[i] << "}" << std::endl;
        }
        
    }

    return EXIT_SUCCESS;
}