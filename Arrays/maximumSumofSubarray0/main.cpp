#include <iostream>
using namespace std;

int main()
{
  int array[]{-4, 1, 3, -2, 6, 2, -1, -4, -7};
  int size{9};
  int maxSum{-1569325055};
  int left{};
  int right{};

  for (int i{}; i < size; i++)
  {
    for (int j{i}; j < size; j++)
    {
      int currSum{};
      for (int k{i}; k <= j; k++)
      {
        currSum += array[k];
      }

      if (currSum > maxSum)
      {
        maxSum = currSum;
        left = i;
        right = j;
      }
      cout << maxSum << ' ' << i << ' ' << j << ' ' << currSum << endl;
    }
  }

  cout << left << ' ' << right << ' ' << maxSum << endl;
}