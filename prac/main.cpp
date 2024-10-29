#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main()
{
  int arr[3][3];
  arr[0] = [ 1, 2, 3 ];
  arr[1] = [ 2, 3 ];
  arr[2] = [ 1, 2, 3, 4, 5 ];

  for (auto i : arr)
  {
    for (auto k : i)
    {
      cout << k << " ";
    }
    cout << endl;
  }
}

// long long power(int n, int mid)
// {
//   if (n == 1)
//   {
//     return mid;
//   }
//   return mid * power(n - 1, mid);
// }
// int NthRoot(int n, int m)
// {
//   int s{1}, e{m};

//   while (s <= e)
//   {
//     int mid{(s + e) / 2};
//     long long pow{};
//     pow = power(n, mid);
//     if (pow == m)
//     {
//       return mid;
//     }
//     else if (pow < m)
//     {
//       s = mid + 1;
//     }
//     else
//     {
//       e = mid - 1;
//     }
//   }
//   return -1;
// }

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   int root{NthRoot(n, m)};
//   cout << root << endl;
// }
// // 3281394748758205203
// // 5855094270804813593
// // int main()
// // {
// //   /* Enter your code here. Read input from STDIN. Print output to STDOUT */
// //   int testCases{};
// //   cin >> testCases;
// //   for (int test{}; test < testCases; test++)
// //   {
// //     int n{};
// //     cin >> n;
// //     stack<int> stack;
// //     vector<int> vec, main;
// //     for (int i{}; i < n; i++)
// //     {
// //       int temp{};
// //       cin >> temp;
// //       vec.push_back(temp);
// //     }
// //     int
// //         counter{1};
// //     for (int i{}; i < n; i++)
// //     {
// //       if (vec.at(i) == counter)
// //       {
// //         main.push_back(vec.at(i));
// //         counter++;
// //       }
// //       else if (vec.at(i) > counter)
// //       {
// //         if (stack.empty())
// //         {
// //           stack.push(vec.at(i));
// //         }
// //         else
// //         {
// //           if (stack.top() == counter)
// //           {
// //             main.push_back(stack.top());
// //             counter++;
// //             stack.pop();
// //           }
// //           else
// //           {
// //             stack.push(vec.at(i));
// //           }
// //         }
// //       }
// //     }
// //     while (!stack.empty())
// //     {
// //       main.push_back(stack.top());
// //       stack.pop();
// //     }
// //     bool flag{true};
// //     for (int i{1}; i <= n; i++)
// //     {
// //       if (main.at(i - 1) == i)
// //       {
// //         continue;
// //       }
// //       else
// //       {
// //         flag = false;
// //       }
// //     }
// //     if (flag)
// //     {
// //       cout << "YES" << endl;
// //     }
// //     else
// //     {
// //       cout << "NO" << endl;
// //     }
// //   }
// //   return 0;
// // }

// // int main()
// // {
// //   string s = "a#c#efg";
// //   int i{};
// //   while (i < static_cast<int>(s.size()))
// //   {
// //     if (s[i] == '#')
// //     {
// //       if (i > 0)
// //       {
// //         s.erase(i - 1, 2);
// //       }
// //       else
// //       {
// //         s.erase(i, 1);
// //       }
// //     }
// //   }
// //   cout << s << endl;

// // getline(cin, s);

// // char c = 's';
// // if (c == 's')
// // {
// //   cout << "works" << endl;
// // }
// // else
// // {
// //   cout << "Doesnt works" << endl;
// // }
// // }

// // int main()         //Vector checking
// // {
// //   vector<int> vec(7, 0);

// //   vec.push_back(1);
// //   vec.push_back(2);
// //   vec.push_back(3);
// //   vec.at(7) = 2;
// //   cout << vec.at(7) << endl;
// // }
// // int main()         //String find
// // {
// //   string s{"I like to eat mangoes and apples."};

// //   int idx = s.find("I");

// //   cout << idx << endl;
// // }

// // int main()         //Testing char arrays
// // {
// //   char arr[100];
// //   char arr1[100] = {"abcde"};
// //   cout << "Enter your string: ";
// //   cin.getline(arr, 100);

// //   cout << arr << endl;

// //   cout << "strlen: " << strlen(arr1) << endl;

// //   cout << "Arr@:_" << (arr1[5] == '\n') << "_" << endl;
// // }