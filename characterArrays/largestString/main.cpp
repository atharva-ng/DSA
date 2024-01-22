#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int n{};
  cin >> n;

  char curr[1000];
  cin.get();

  char largest[1000];
  int largestLen{-1};

  for (int i{}; i < n; i++)
  {
    cin.getline(curr, 1000);

    int len = strlen(curr);
    if (len > largestLen)
    {
      strcpy(largest, curr);
      largestLen = len;
    }
  }

  cout << "Largest string length: " << largestLen << " largest string: " << largest << endl;
}