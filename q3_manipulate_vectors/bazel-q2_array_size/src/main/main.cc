#include <iostream>
#include "src/lib/solution.h"

int main()
{
    int int_arr[] = {1, 2, 3, 4, 5};
    char char_arr[] = "12345";
    float float_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};

    int size_int_arr = *(&int_arr + 1) - int_arr;
    std::cout << "size(int_arr) = " << size_int_arr << std::endl;

    int size_char_arr = (int)(*(&char_arr + 1) - char_arr);
    std::cout << "size(char_arr) = " << size_char_arr << std::endl;

    int size_float_arr = (int)(*(&float_arr + 1) - float_arr);
    std::cout << "size(float_arr) = " << size_float_arr << std::endl;

    return EXIT_SUCCESS;
}