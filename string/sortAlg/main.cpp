#include <iostream>
#include <string>

using namespace std;

bool compare(string a, string b)
{
  if (a.length() == b.length())
  {
    return a < b;
  }

  return a.length() < b.length();
}

int main()
{
  int n{};
  cout << "Enter N: ";
  cin >> n;
  cout << endl;

  cin.get();

  string sArr[10];

  for (int i{}; i < n; i++)
  {
    getline(cin, sArr[i]);
  }

  sort(sArr, sArr + n, compare);

  for (int i{}; i < n; i++)
  {
    cout << sArr[i] << endl;
  }
}