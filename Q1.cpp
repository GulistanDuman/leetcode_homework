#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &arr)
{
  if (arr.empty())
    return 0;

  int i = 0;
  for (int j = 1; j < arr.size(); j++)
  {
    if (arr[j] != arr[i])
    {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main()
{
  vector<int> arr(7);
  arr[0] = 0;
  arr[1] = 0;
  arr[2] = 3;
  arr[3] = 3;
  arr[4] = 3;
  arr[5] = 3;
  arr[6] = 3;
  cout << removeDuplicates(arr);
}