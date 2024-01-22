#include <iostream>
#include <cstring>
using namespace std;

void removeDupes(char arr[])
{
  if (strlen(arr) == 1 || strlen(arr) == 0)
  {
    return;
  }

  int prev{};
  for (int curr{1}; curr <= strlen(arr); curr++)
  {
    if (arr[prev] != arr[curr])
    {
      prev++;
      arr[prev] = arr[curr];
    }
  }
}

int main()
{
  char ch[1000];
  cout << "Enter your string: ";
  cin.getline(ch, 1000);

  removeDupes(ch);
  cout << ch << endl;
}