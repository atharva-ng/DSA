#include <iostream>

using namespace std;

// given a sorted array, find the pair of elements whose sum is k

int main()
{
  int array[]{1, 3, 5, 7, 10, 11, 12, 13};
  int size{sizeof(array) / sizeof(int)};

  int k{16};

  int i{}, j{size - 1};

  while (i < j)
  {
    if (array[i] + array[j] > k)
    {
      j--;
    }
    else if (array[i] + array[j] < k)
    {
      i++;
    }
    else if (array[i] + array[j] == k)
    {
      cout << i << " " << j << endl;
      j--;
      i++;
    }
  }
  cout << "Done" << endl;
}