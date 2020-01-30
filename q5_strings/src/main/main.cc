#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;

    std::string string1 = "spencer";
    std::cout << "swap s an c in " << string1 << ":";
    std::cout << solution.swap(string1, 0, 4) << std::endl;
    
    return EXIT_SUCCESS;
}