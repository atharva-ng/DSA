#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

int main()
{
  string s = "a#c#efg";
  int i{};
  while (i < static_cast<int>(s.size()))
  {
    if (s[i] == '#')
    {
      if (i > 0)
      {
        s.erase(i - 1, 2);
      }
      else
      {
        s.erase(i, 1);
      }
    }
  }
  cout << s << endl;

  // getline(cin, s);

  // char c = 's';
  // if (c == 's')
  // {
  //   cout << "works" << endl;
  // }
  // else
  // {
  //   cout << "Doesnt works" << endl;
  // }
}

// int main()         //Vector checking
// {
//   vector<int> vec(7, 0);

//   vec.push_back(1);
//   vec.push_back(2);
//   vec.push_back(3);
//   vec.at(7) = 2;
//   cout << vec.at(7) << endl;
// }
// int main()         //String find
// {
//   string s{"I like to eat mangoes and apples."};

//   int idx = s.find("I");

//   cout << idx << endl;
// }

// int main()         //Testing char arrays
// {
//   char arr[100];
//   char arr1[100] = {"abcde"};
//   cout << "Enter your string: ";
//   cin.getline(arr, 100);

//   cout << arr << endl;

//   cout << "strlen: " << strlen(arr1) << endl;

//   cout << "Arr@:_" << (arr1[5] == '\n') << "_" << endl;
// }