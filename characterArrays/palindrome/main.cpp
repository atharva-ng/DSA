#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(char arr[])
{
  int i{};
  int j = strlen(arr) - 1;

  while (i < j)
  {
    if (arr[i] != arr[j])
    {
      return false;
    }
    i++;
    j--;
  }
  return true;
}

int main()
{
  int maxSize{1000};
  char ch[maxSize];

  cout << "Enter your string: ";

  cin.getline(ch, maxSize);

  cout << "isPalindrome: " << isPalindrome(ch) << endl;
}