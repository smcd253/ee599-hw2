#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;
    int a = 1;
    int b = 2;
    std::cout << "Before Reference Swap: a = " << a << ", b = " << b << std::endl;
    solution.swap(&a, &b);
    std::cout << "After Reference Swap: a = " << a << ", b = " << b << std::endl;
    int *A = &a;
    int *B = &b;
    solution.swap(A, B);
    std::cout << "After Pointer Swap: a = " << a << ", b = " << b << std::endl;

    return EXIT_SUCCESS;
}