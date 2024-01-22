#include <iostream>

using namespace std;

int main()
{
  int c, r, ph{1};
  cout << "Enter m,n: ";
  cin >> r >> c;
  int arr[r][c];

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

  cout << endl;

  for (int j{}; j < c; j++)
  {
    if (j % 2 == 0)
    {
      for (int i{}; i < r; i++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else
    {
      for (int i{2}; i >= 0; i--)
      {
        cout << arr[i][j] << " ";
      }
    }
  }

  cout << endl
       << endl;

  for (int i{}; i < r; i++)
  {
    for (int j{}; j < c; j++)
    {
      if (j % 2 == 0)
      {
        cout << arr[i][j] << " ";
      }
      else
      {
        cout << arr[r - 1 - i][j] << " ";
      }
    }
    cout << endl;
  }

  cout << endl;

  for (int i{}; i < r; i++)
  {
    for (int j{}; j < c; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  int sr{}, er{r - 1}, sc{}, ec{c - 1};

  while (sr <= er && sc <= ec)
  {
    for (int i{sc}; i <= ec; i++)
    {
      cout << arr[sr][i] << " ";
    }
    sr++;

    for (int i{sr}; i <= er; i++)
    {
      cout << arr[i][ec] << " ";
    }
    ec--;

    if (er >= sr)
    {
      for (int i{ec}; i >= sc; i--)
      {
        cout << arr[er][i] << " ";
      }
      er--;
    }

    if (ec <= sc)
    {
      for (int i{er}; i >= sr; i--)
      {
        cout << arr[i][sc] << " ";
      }
      sc++;
    }
  }
  cout << endl;
}

while (er >= sr &&)
{
  if (er <= sr)
  {
    break;
  }
  for (int i{ec}; i >= sc; i--)
  {
    cout << arr[er][i] << " ";
  }
  er--;

  if (ec >= sc)
  {
    break;
  }
  for (int i{er}; i >= sr; i--)
  {
    cout << arr[i][sc] << " ";
  }
  sc++;
}