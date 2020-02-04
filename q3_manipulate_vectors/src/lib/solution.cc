#include "solution.h"

void Solution::remove_duplicates(std::vector<int>& input)
{
    std::set<int> set_filter;
    std::set<int>::iterator it = set_filter.begin();

    for (auto n : input)
    {
        set_filter.insert(it, n);
    }

    std::vector<int> no_duplicates(set_filter.begin(), set_filter.end());
    input.swap(no_duplicates);
}

void Solution::remove_duplicates_raw(std::vector<int>& input)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator _it;

    for (it = input.begin(); it != input.end(); it++)
    {
        // erase all duplicate instances of this value
        if (it < input.end() - 1)
        {   
            _it = it + 1;
            while (_it != input.end())
            {
                if (*it == *_it)
                {
                    input.erase(_it);
                }
                else
                {
                    _it++;
                }
            }
        }
    }
}

void Solution::reverse(std::vector<int>& input)
{
    std::vector<int>::iterator it = input.begin();
    std::vector<int>::iterator it_dwn = input.end() - 1;
    int temp;
    for (size_t i = 0; i < input.size() / 2; i++)
    {
        // swap variables from top to bottom
        if(it != it_dwn)
        {
            temp = *it;
            *it = *it_dwn;
            *it_dwn = temp;
        }
        // exit loop if vector is of odd size and we are at middle element
        else
        {
            break;
        }
        it++;
        it_dwn--;
    }
}

void Solution::remove_odds(std::vector<int>& input)
{
    std::vector<int>::iterator it = input.begin();
    while(it != input.end())
    {
        if(*it % 2 != 0)
        {
            input.erase(it);
        }
        else
        {
            it++;
        }
        
    }
}

std::vector<int> Solution::concat(std::vector<int>& input1, std::vector<int>& input2)
{
    std::vector<int> result;
    std::vector<int>::iterator it;

    for (it = input1.begin(); it != input1.end(); it++)
    {
        result.insert(result.end(), *it);
    }
    for (it = input2.begin(); it != input2.end(); it++)
    {
        result.insert(result.end(), *it);
    }
    return result;
}

std::vector<int> Solution::intersection(std::vector<int>& input1, std::vector<int>& input2)
{
    std::set<int> set_filter;
    std::vector<int>::iterator it1;
    std::vector<int>::iterator it2;

    for (it1 = input1.begin(); it1 != input1.end(); it1++)
    {
        for(it2 = input2.begin(); it2 != input2.end(); it2++)
        {
            if(*it1 == *it2)
            {
                set_filter.insert(set_filter.begin(), *it1);
            }
        }
    }

    std::vector<int> result(set_filter.begin(), set_filter.end());
    return result;
}