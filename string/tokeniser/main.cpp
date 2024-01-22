#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s[100] = "This is a big sentence.";

  char *ptr = strtok(s, " ");

  cout << ptr << endl;

  char *ptr1 = strtok(NULL, " ");
  cout << ptr1 << endl;

  string s0, s1;
  s0 = "this";
  s1 = "this";
  cout << "Bool: " << (s == s1) << endl;
}