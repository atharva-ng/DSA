#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
  // cout << "comp" << a << " " << b << endl;
  return a > b;
}

int main()
{
  int array[]{1, 3, 5, 4, 2};
  int size{5};

  sort(array, array + size, compare);

  for (int i{}; i < size; i++)
  {
    cout << array[i] << endl;
  }
}
