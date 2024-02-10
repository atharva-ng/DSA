#include <iostream>

using namespace std;

// float sqrt(int n, int p)
// {
//   int start{}, end{n}, mid{};
//   float ans{};
//   while (start <= end)
//   {
//     mid = (start + end) / 2;
//     if (mid * mid == n)
//     {
//       return mid;
//     }
//     else if (mid * mid < n)
//     {
//       ans = mid;
//       start = mid + 1;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//   }
//   float inc{0.1};
//   for (int j{}; j < p; j++)
//   {
//     while (ans * ans <= n)
//     {
//       ans = ans + inc;
//     }
//     ans = ans - inc;
//     inc = inc / 10;
//   }
//   return ans;
// }

// int main()
// {
//   cout << "Enter Number: ";
//   int n{};
//   cin >> n;

//   cout << "Square Root: " << sqrt(n, 3) << endl;
// }