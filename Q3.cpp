#include <iostream>
#include <vector>
using namespace std;

void printPascal(int n)
{
  vector<vector<int>> ans(n);

  for (int i = 0; i < n; i++)
  {
    ans[i].resize(i + 1);
    ans[i][0] = ans[i][i] = 1;

    for (int j = 1; j < i; j++)
    {
      ans[i][j] = ans[i - 1][j - 1] + ans[i - 1][j];
    }

    for (int j = 0; j <= i; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
}

int main()
{
  int n = 5;
  printPascal(n);
  return 0;
}
