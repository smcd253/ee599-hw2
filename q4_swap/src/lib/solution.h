#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:

  /**
   * Add overload 1.
   * 
   * @param   a                              <tt>int</tt> to add.
   * @param   b                              <tt>int</tt> to add.
   * 
   * @returns <tt>int</tt> a + b             On success.
   * 
   * */
  void swap(int& a, int& b);
  void swap(int* a, int* b);
};

#endif