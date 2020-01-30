#include "solution.h"

/**
 * Creates a mapping from char c_from to char c_to.
 * 
 * @returns   true    if key/value pair has NOT already been entered
 * @returns   false   if key/value pair has already been entered
 * */
bool Solution::create_mapping(char c_from, char c_to)
{
  std::pair<std::map<char,char>::iterator, bool> insert_result;
  insert_result = this->my_map.insert(std::pair<char,char>(c_from, c_to));
  return insert_result.second;
}

std::vector<std::string> Solution::find_mapping(std::string from, std::string to)
{
  // input validation
  if (from.empty() || 
      to.empty() ||
      from.size() != to.size()
      )
  {
    return {};
  }

  // look for possible mapping
  std::vector<std::string> result;

  // look for run of letters in both
  for (size_t i = 0; i < from.size(); i++)
  {
    // if create_mapping returns false (mapping already exists)
    if(!create_mapping(from[i], to[i]))
    {
      // check that to[i] matches current mapping
      if(this->my_map[from[i]] == to[i])
      {
        // the mapping holds, then move on to the next character
        continue;
      }
      else
      {
        // if the mapping does not hold, then mapping has failed
        return {};
      }
    }
  }

  // mapping has succeeded, now convert to string vector
  for (auto n : this->my_map)
  {
    // build formatted string
    std::string map_n = "(";
    map_n.push_back(n.first);
    map_n.append("->");
    map_n.push_back(n.second);
    map_n.append(")");

    // append to end of result
    result.push_back(map_n);
  }

  // clear my_map for next run
  my_map.clear();

  return result;
}
