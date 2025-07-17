#include <iostream>

class Solution
{
public:
  bool isPalindrome(int x)
  {
    if (x < 0)
    {
      return false;
    }
    long rev = 0;
    int temp = x;
    while (temp != 0)
    {
      int digit = temp % 10;
      rev = rev * 10 + digit;
      temp = temp / 10;
    }
    if (rev == x)
    {
      return true;
    }
    else
    {
      return false;
    }
  }
};

int main()
{
  Solution s;
  std::cout << "Is 121 a palindrome? " << (s.isPalindrome(121) ? "Yes" : "No") << std::endl;
  std::cout << "Is -121 a palindrome? " << (s.isPalindrome(-121) ? "Yes" : "No") << std::endl;
  std::cout << "Is 10 a palindrome? " << (s.isPalindrome(10) ? "Yes" : "No") << std::endl;
  std::cout << "Is 12321 a palindrome? " << (s.isPalindrome(12321) ? "Yes" : "No") << std::endl;
  std::cout << "Is 0 a palindrome? " << (s.isPalindrome(0) ? "Yes" : "No") << std::endl;
  std::cout << "Is 2147483647 (MAX_INT) a palindrome? " << (s.isPalindrome(2147483647) ? "Yes" : "No") << std::endl;
  return 0;
}