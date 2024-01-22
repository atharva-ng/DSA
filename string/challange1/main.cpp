#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

string getStringAtKey(string s, int key)
{
  char *ptr = strtok((char *)s.c_str(), " ");

  while (key > 1)
  {
    ptr = strtok(NULL, " ");
    key--;
  }

  return (string)ptr;
}

int toInt(string s)
{
  int p{1}, ans{};
  for (int i = s.length() - 1; i >= 0; i--)
  {
    ans = ans + s[i] * p;
    p = p * 10;
  }
  return ans;
}

bool compareNum(pair<string, string> a, pair<string, string> b)
{
  return toInt(a.second) < toInt(b.second);
}

bool compareLex(pair<string, string> a, pair<string, string> b)
{
  return (a.second < b.second);
}

int main()
{
  int n{};

  cin >> n;
  cin.get();

  int key{};
  string reversal, type;
  string sInp[n];
  string sOut[n];

  for (int i{}; i < n; i++)
  {
    getline(cin, sInp[i]);
  }

  cin >> key >> reversal >> type;

  pair<string, string> list[n];

  for (int i{}; i < n; i++)
  {
    list[i].first = sInp[i];
    list[i].second = getStringAtKey(sInp[i], key);
  }

  if (type == "numeric")
  {
    sort(list, list + n, compareNum);
  }
  else
  {
    sort(list, list + n, compareLex);
  }

  if (reversal == "true")
  {
    for (int i{}; i < n / 2; i++)
    {
      swap(list[i], list[n - 1 - i]);
    }
  }

  for (auto p : list)
  {
    cout << p.first << endl;
  }
}