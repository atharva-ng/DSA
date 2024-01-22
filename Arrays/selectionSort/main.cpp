#include <iostream>
using namespace std;

void swap(int &n, int &m, int *arr)
{
  int k{};
  k = arr[n];
  arr[n] = arr[m];
  arr[m] = k;
}

int main()
{
  int arr[]{9, 12, 45, 3, 6};
  int size = 5;

  for (int i = 0; i < size - 1; i++)
  {
    int lowestIndex{i};
    for (int j = i + 1; j < size; j++)
    {
      if (arr[j] < arr[lowestIndex])
      {
        lowestIndex = j;
      }
    }
    swap(i, lowestIndex, arr);
  }

  for (int i{}; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}