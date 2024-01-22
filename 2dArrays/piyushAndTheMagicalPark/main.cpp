#include <iostream>
#include <cstring>

using namespace std;

// int main()
// {
//   int n{}, m{}, k{}, s{};
//   cin >> n >> m >> k >> s;
//   cin.get();
//   char arr[n][m];

//   for (int i{}; i < n; i++)
//   {
//     for (int j{}; j < m; j++)
//     {
//       cin >> arr[i][j];
//     }
//   }

//   for (int i{}; i < n; i++)
//   {
//     for (int j{}; j < m; j++)
//     {
//       if (s < k)
//       {
//         i = n;
//         break;
//       }
//       if (arr[i][j] == '.')
//       {
//         s = s - 2;
//       }
//       else if (arr[i][j] == '*')
//       {
//         s = s + 5;
//       }
//       else
//       {
//         break;
//       }

//       if (j != m - 1)
//       {
//         s--;
//       }
//     }
//   }

//   if (s >= k)
//   {
//     cout << "Yes" << endl
//          << s;
//   }
//   else
//   {
//     cout << "No";
//   }
// }

int main()
{
  int n{}, m{}, k{}, s{};

  cin >> n >> m >> k >> s;

  cin.get();

  char ch[m];
  cout << endl
       << "CH: "
       << &ch << endl;
  char *ptr;
  cout << "Ptr: " << &ptr << endl;
  for (int i{}; i < n; i++)
  {
    char ch[100];
    cin.getline(ch, 100);

    for (int j{}; j < m; j++)
    {
      if (s < k)
      {
        i = n;
        break;
      }
      if (j != 0)
      {
        ptr = strtok(NULL, " ");
        cout << &ptr << endl;
      }
      else
      {
        ptr = strtok(ch, " ");
        cout << &ptr << endl;
      }

      if (*ptr == '.')
      {
        s = s - 2;
      }
      else if (*ptr == '*')
      {
        s = s + 5;
      }
      else
      {
        break;
      }

      if (j != m - 1)
      {
        s--;
      }
    }
  }

  if (s >= k)
  {
    cout << "Yes" << endl
         << s;
  }
  else
  {
    cout << "No" << endl;
  }
}
