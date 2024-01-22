#include <iostream>

using namespace std;

int main()
{
  int n{};
  cin >> n;
  int arr[n][n];
  for (int i{}; i < n; i++)
  {
    for (int j{}; j < n; j++)
    {
      cin >> arr[i][j];
    }
  }

  for (int i{}; i < n; i++)
  {
    reverse(arr[i], arr[i] + n);
    // for (int j{}; j < n / 2; j++)
    // {
    //   swap(arr[i][j], arr[i][n - j - 1]);
    // }
  }

  for (int i{}; i < n - 1; i++)
  {
    for (int j{i + 1}; j < n; j++)
    {
      swap(arr[i][j], arr[j][i]);
    }
  }

  for (int i{}; i < n; i++)
  {
    for (int j{}; j < n; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}