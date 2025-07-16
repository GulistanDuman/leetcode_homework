#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int arraySign(vector<int> &nums)
  {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == 0)
        return 0;
      else if (nums[i] < 0)
        count++;
    }
    if (count % 2 == 1)
    {
      return -1;
    }
    else
    {
      return 1;
    }
  }
};

int main()
{
  Solution sol;
  vector<int> nums = {1, -2, -3, 4}; // Example input
  int result = sol.arraySign(nums);
  cout << "Sign of the product is: " << result << endl;
  return 0;
}
