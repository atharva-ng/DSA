#include <iostream>

using namespace std;

int main()
{
  int array[]{-4, -1, -3, -2, -6, -2, -8, -4, -7};
  // int array[]{-4, 1, 3, -2, 6, 2, -1, -4, -1};

  int size{9};
  // int left{-1}, right{-1};

  int maxSum{-1569325055};
  int currSum{};

  for (int i{}; i < size; i++)
  {
    currSum = currSum + array[i];
    if (currSum > maxSum)
    {
      maxSum = currSum;
    }
    if (currSum < 0)
    {
      currSum = 0;
    }
  }
  cout << "Max Sum: " << maxSum << endl;
}