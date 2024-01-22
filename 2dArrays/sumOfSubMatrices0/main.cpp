#include <iostream>

using namespace std;

int main()
{

  int c, r, ph{1};
  cout << "Enter m,n: ";
  cin >> r >> c;
  int arr[r][c];
  int arr1[r][c];

  for (int i{}; i < r; i++)
  {
    for (int j{}; j < c; j++)
    {
      arr[i][j] = ph;
      ph++;
    }
  }

  for (int i{}; i < r; i++)
  {
    for (int j{}; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  int sum{};

  for (int li{}; li < c; li++)
  {
    for (int lj{}; lj < r; lj++)
    {
      for (int ri{li + 1}; ri <= c; ri++)
      {
        for (int rj{lj + 1}; rj <= r; rj++)
        {
          for (int i{li}; i < ri; i++)
          {
            for (int j{lj}; j < rj; j++)
            {
              sum += arr[i][j];
            }
          }
        }
      }
    }
  }

  cout << endl
       << "Sum:" << sum << endl;

  for (int i{}; i < r; i++)
  {
    for (int j{}; j < c; j++)
    {
      arr1[i][j] = ph;
      ph++;
    }
  }

  for (int j{0}; j < r; j++)
  {
    for (int i{1}; i < c; i++)
    {
      arr1[i][j] = arr1[i - 1][j] + arr1[i][j];
    }
  }
  for (int i{0}; i < c; i++)
  {
    for (int j{1}; j < r; j++)
    {
      arr1[i][j] = arr1[i][j - 1] + arr1[i][j];
    }
  }

  for (int li{}; li < c; li++)
  {
    for (int lj{}; lj < r; lj++)
    {
      for (int ri{li + 1}; ri <= c; ri++)
      {
        for (int rj{lj + 1}; rj <= r; rj++)
        {
        }
      }
    }
  }

  return 0;
}