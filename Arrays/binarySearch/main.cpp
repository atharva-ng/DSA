#include <iostream>
using namespace std;
int main()
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = 10;

  while (n == 10)
  {
    int start = 0;
    int element{};
    int end = n;
    int mid = 0;
    cout << "Enter your element: ";
    cin >> element;
    cout << endl;
    while (start <= end)
    {
      mid = (start + end) / 2;
      if (arr[mid] == element)
      {
        cout << "Element found at " << mid << endl;
        break;
      }
      else if (element > arr[mid])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }
    }
  }
}
