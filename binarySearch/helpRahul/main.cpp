// https://hack.codingblocks.com/app/practice/6/1044/problem

#include <iostream>
using namespace std;

int binarySearch(int n, int arr[], int key)
{
  int s{}, e{n - 1}, mid{};
  while (s <= e)
  {
    mid = (s + e) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[s] <= arr[mid])
    {
      if (key < arr[mid] && key >= arr[s])
      {
        e = mid - 1;
      }
      else
      {
        s = mid + 1;
      }
    }
    else if (arr[mid] <= arr[e])
    {
      if (arr[mid] < key && key <= arr[e])
      {
        s = mid + 1;
      }
      else
      {
        e = mid - 1;
      }
    }
  }
  return -1;
}

int main()
{
  int n{}, key{};
  cin >> n;
  int arr[n];
  for (int i{}; i < n; i++)
  {
    cin >> arr[i];
  }
  cin >> key;
  int ans{binarySearch(n, arr, key)};
  cout << ans << endl;
  return ans;
}