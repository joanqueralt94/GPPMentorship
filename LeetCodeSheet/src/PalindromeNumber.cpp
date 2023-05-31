#include "PalindromeNumber.h"

bool PalindromeNumber::isPalindrome(int x)
{
    std::string palindrome = std::to_string(x);
    std::string inversepalindrome = palindrome;
    
    int index = 0;

    for (int i = (palindrome.size() -1); i > 0; --i)
    {
        inversepalindrome[index] = palindrome[i];
        ++index;
    }
    
   return palindrome == inversepalindrome;
}
