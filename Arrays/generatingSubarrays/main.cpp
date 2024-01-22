#include <iostream>
using namespace std;

int main()
{
  int array[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size{10};

  for (int i{}; i < size; i++)
  {
    for (int j{i}; j < size; j++)
    {
      for (int k{i}; k <= j; k++)
      {
        cout << array[k] << ',';
      }
      cout << endl;
    }
  }
}