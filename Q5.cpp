#include <iostream>
#include <string>
#include <utility>
#include <unordered_map>

int main()
{
  std::pair<int, std::string> logs[5];
  logs[0] = {1, "foo"};
  logs[1] = {2, "bar"};
  logs[2] = {3, "foo"};
  logs[3] = {8, "fba"};
  logs[4] = {11, "foo"};

  std::unordered_map<std::string, int> hash;

  for (const auto &log : logs)
  {
    if (hash.find(log.second) == hash.end())
    {
      std::cout << " true ";
      hash[log.second] = log.first;
    }
    else
    {
      int oldTime = hash[log.second];

      if (log.first - oldTime >= 10)
      {
        std::cout << " true ";
        hash[log.second] = log.first;
      }
      else
      {
        std::cout << " false ";
      }
    }
  }

    return 0;
}