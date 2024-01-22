#include <iostream>

using namespace std;

int main()
{
  int array[]{-4, 1, 3, -2, 6, 2, -1, -4, -7};
  int cumSum[]{0, 0, 0, 0, 0, 0, 0, 0, 0};
  int size{9};
  int cSum{0};
  int maxSum{-1569325055};

  for (int i{}; i < size; i++)
  {
    cSum += array[i];
    cumSum[i] = cSum;
  }
  for (int i{}; i < size; i++)
  {
    cout << cumSum[i] << endl;
  }

  for (int i{}; i < size; i++)
  {
    for (int j{i}; j < size; j++)
    {
      cSum = cumSum[j] - cumSum[i - 1];
      if (cSum > maxSum)
      {
        maxSum = cSum;
      }
    }
  }

  cout << maxSum << endl;
}