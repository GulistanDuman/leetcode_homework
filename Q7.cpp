#include <iostream>
#include <string>
#include <cctype>

class Solution
{
public:
  bool isPalindrome(std::string s)
  {
    int start = 0;
    int last = s.size() - 1;

    while (start < last)
    {
      if (!std::isalnum(s[start]))
      {
        start++;
      }
      else if (!std::isalnum(s[last]))
      {
        last--;
      }
      else if (std::tolower(s[start]) != std::tolower(s[last]))
      {
        return false;
      }
      else
      {
        start++;
        last--;
      }
    }
    return true;
  }
};

int main()
{
  Solution sol;

  std::cout << "Is 'A man, a plan, a canal: Panama' a palindrome? "
            << (sol.isPalindrome("A man, a plan, a canal: Panama") ? "Yes" : "No") << std::endl;

  std::cout << "Is 'race a car' a palindrome? "
            << (sol.isPalindrome("race a car") ? "Yes" : "No") << std::endl;

  std::cout << "Is 'madam' a palindrome? "
            << (sol.isPalindrome("madam") ? "Yes" : "No") << std::endl;

  std::cout << "Is 'Eva, can I stab a crab in a vast cave?' a palindrome? "
            << (sol.isPalindrome("Eva, can I stab a crab in a vast cave?") ? "Yes" : "No") << std::endl;

  return 0;
}