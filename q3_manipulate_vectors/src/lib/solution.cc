#include "solution.h"

std::vector<int> Solution::remove_duplicates(std::vector<int> has_duplicates)
{
    std::set<int> set_filter;
    std::set<int>::iterator it = set_filter.begin();

    for (auto n : has_duplicates)
    {
        set_filter.insert(it, n);
        it++;
    }

    std::vector<int> no_duplicates(set_filter.begin(), set_filter.end());
    return no_duplicates;
}

std::vector<int> Solution::remove_duplicates_raw(std::vector<int> has_duplicates)
{
    std::vector<int> no_duplicates;
    std::vector<int>::iterator it;

    for (it = has_duplicates.begin(); it != has_duplicates.end(); it++)
    {
        // check if n already added to no_duplicates
        bool add_it = true;
        std::vector<int>::iterator _it;
        for (_it = no_duplicates.begin(); _it != no_duplicates.end(); _it++)
        {
            if (*it == *_it)
            {
                add_it = false;
            }
        }

        // add if not alrady added
        if(add_it)
        {
            no_duplicates.push_back(*it);
        }
    }
    return no_duplicates;
}

std::vector<int> Solution::reverse(std::vector<int> input)
{
    std::vector<int> result;
    std::vector<int>::iterator it_in;

    for (it_in = input.begin(); it_in != input.end(); it_in++)
    {
        result.insert(result.begin(), *it_in);
    }
}

