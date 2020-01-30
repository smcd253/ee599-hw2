#include "solution.h"

std::vector<int> Solution::reverse(std::vector<int> input)
{
    std::vector<int> result;
    std::vector<int>::iterator it_in;
    for (it_in = input.begin(); it_in != input.end(); it_in++)
    {
        result.insert(result.begin(), *it_in);
    }

    return result;
}

std::vector<int> Solution::special_sort(std::vector<int> input)
{
    // input validation
    if (input.empty())
    {
        return {};
    }

    // sort array
    std::sort(input.begin(), input.end());

    // temp variables
    std::vector<int> l_half, u_half;
    int median;

    std::vector<int> result;
    // if even, divide in two
    if(input.size()%2 == 0)
    {   
        // split vector
        l_half.insert(l_half.begin(), input.begin(), input.end() - input.size()/2);
        u_half.insert(u_half.begin(), input.end() - input.size()/2, input.end());

        // reverse sub-vectors
        l_half = reverse(l_half);
        u_half = reverse(u_half);

        // build result
        result.insert(result.begin(), l_half.begin(), l_half.end());
        result.insert(result.end(), u_half.begin(), u_half.end());
        
    }
    // if odd, remove median and divide in two
    else
    {
        // remove median
        median = input.at(input.size()/2);
        input.erase(input.begin() + input.size()/2);

        // split vector
        l_half.insert(l_half.begin(), input.begin(), input.end() - input.size()/2);
        u_half.insert(u_half.begin(), input.end() - input.size()/2, input.end());

        // reverse sub-vectors
        l_half = reverse(l_half);
        u_half = reverse(u_half);

        // build result
        result.insert(result.begin(), l_half.begin(), l_half.end());
        result.insert(result.end(), median);
        result.insert(result.end(), u_half.begin(), u_half.end());
    }
    
    return result;
}
