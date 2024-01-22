#include <iostream>

using namespace std;

int main()
{
  int array[] = {7, 5, 2, 3, 1, 0, 6, 9, 4, 8};
  int size = 10;

  int sortBoundry{};
  while (sortBoundry != size - 1)
  {
    int temp{array[sortBoundry + 1]};

    int i{sortBoundry};
    while (array[i] > temp)
    {
      array[i + 1] = array[i];
      i = i - 1;
    }

    array[i + 1] = temp;
    sortBoundry++;
  }

  for (int i{}; i < size; i++)
  {
    cout << array[i] << endl;
  }
}