#include <iostream>
#include <vector>
#include <numeric>

int missingElement(std::vector<int> &nums)
{
  int n_xor = nums.size();
  for (int i = 0; i < nums.size(); i++)
  {
    n_xor = n_xor ^ i;
    n_xor = n_xor ^ nums[i];
  }
  return n_xor;
}

int main()
{
  std::vector<int> nums(3);
  nums[0] = 3;
  nums[1] = 0;
  nums[2] = 1;

  std::cout << missingElement(nums) << std::endl;

  std::vector<int> nums2 = {9, 6, 4, 2, 3, 5, 7, 0, 1};
  std::cout << missingElement(nums2) << std::endl;

  return 0;
}