#include <iostream>
using namespace std;

void swap(int i, int *arr)
{
  int temp;
  temp = arr[i + 1];
  arr[i + 1] = arr[i];
  arr[i] = temp;
}

int main()
{
  int arr[] = {11, 7, 4, 21, 6, 9, 5, 3};
  int size{8};

  for (int i = 0; i < size - 1; i++)
  {
    for (int j{}; j < size - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(j, arr);
      }
    }
  }

  for (int i{}; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}