#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArray(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
  int i = m - 1;
  int j = n - 1;
  int k = m + n - 1;

  while (i >= 0 && j >= 0)
  {
    if (nums1[i] > nums2[j])
    {
      nums1[k--] = nums1[i--];
    }
    else
    {
      nums1[k--] = nums2[j--];
    }
  }

  while (j >= 0)
  {
    nums1[k--] = nums2[j--];
  }
}

int main()
{
  int m = 3;
  int n = 3;
  vector<int> nums1 = {1, 2, 3, 0, 0, 0};
  vector<int> nums2 = {2, 5, 6};

  mergeSortedArray(nums1, nums2, m, n);

  cout << "Merged array: ";
  for (int num : nums1)
    cout << num << " ";
  cout << endl;

  return 0;
}
