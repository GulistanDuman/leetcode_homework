#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int> stones)
{
  priority_queue<int> pq;
  for (int x : stones)
  {
    pq.push(x);
  }

  while (pq.size() > 1)
  {
    int x = pq.top();
    pq.pop();
    int y = pq.top();
    pq.pop();
    if (x != y)
    {
      pq.push(x - y);
    }
  }

  return pq.empty() ? 0 : pq.top();
}

int main()
{
  vector<int> stones = {2, 7, 4, 1, 8, 1};
  cout << lastStoneWeight(stones);
  return 0;
}
