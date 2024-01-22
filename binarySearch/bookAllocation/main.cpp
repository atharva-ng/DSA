#include <iostream>
using namespace std;

bool numPages(int *pages, int students, int books, int mid)
{
  int stuTrack{students};
  int sum{};
  int i{};

  while (i < books and stuTrack > 0)
  {
    sum = sum + pages[i];
    if (sum >= mid)
    {
      if (sum > mid)
      {
        i = i - 1;
      }
      sum = 0;
      stuTrack = stuTrack - 1;
    }
    i++;
  }
  if (i == books)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  int numTests{};
  cin >> numTests;

  for (int i{}; i < numTests; i++)
  {
    int books{}, students{}, pages[1000], sum{};

    cin >> books >> students;

    if (books < students)
    {
      cout << -1 << endl;
      return 0;
    }

    for (int j{}; j < books; j++)
    {
      cin >> pages[j];
      sum = sum + pages[j];
    }

    int start{pages[books - 1]}, end{sum}, ans{INT_MAX};

    while (start <= end)
    {
      int mid{(start + end) / 2};
      if (numPages(pages, students, books, mid))
      {
        ans = min(mid, ans);
        end = mid - 1;
      }
      else
      {
        start = mid + 1;
      }
    }
    cout << ans << endl;
  }
}