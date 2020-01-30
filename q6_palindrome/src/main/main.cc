#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution;

    std::string string1 = "racecar";
    std::cout << "Q: is " << string1 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.palindrome(string1) == 1 ? "Yes" : "No") << std::endl;

    std::string string2 = "spencer";
    std::cout << "Q: is " << string2 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.palindrome(string2) == 1 ? "Yes" : "No") << std::endl;
    
    std::string sentence1 = "\"A man, a plan, a canal, Panama!\"";
    std::cout << "Q: is " << sentence1 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.approx_palindrome(sentence1) == 1 ? "Yes" : "No") << std::endl;
    
    std::string sentence2 = "\"Was it a car or a cat I saw?\"";
    std::cout << "Q: is " << sentence2 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.approx_palindrome(sentence1) == 1 ? "Yes" : "No") << std::endl;

    std::string sentence3 = "\"No 'x' in Nixon\"";
    std::cout << "Q: is " << sentence3 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.approx_palindrome(sentence1) == 1 ? "Yes" : "No") << std::endl;

    std::string sentence4 = "\"iS 'tHis' a pAlinDrome?!\"";
    std::cout << "Q: is " << sentence4 << " a palindrome?" << std::endl;
    std::cout << "A: " << (solution.approx_palindrome(sentence4) == 1 ? "Yes" : "No") << std::endl;
    return EXIT_SUCCESS;
}