#include <iostream>

using namespace std;

void readPara(char arr[], int maxLength, char delim = '\n')
{
  int i{};
  char ch = cin.get();
  while (ch != delim)
  {
    arr[i] = ch;
    i++;
    if (i == (maxLength - 1))
    {
      break;
    }
    ch = cin.get();
  }
  arr[i] = '\0';
}

int main()
{
  char arr[1000];
  readPara(arr, 1000);
  cout << arr << endl;
}