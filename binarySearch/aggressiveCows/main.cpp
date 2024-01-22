#include <iostream>

using namespace std;

bool checkDistance(int stalls[], int n, int cows, int dist)
{
  int start{}, end{1}, track{cows - 1};

  while (end < n && track > 0)
  {
    if (stalls[end] - stalls[start] >= dist)
    {
      start = end;
      track--;
    }
    else
    {
      end = end + 1;
    }
  }

  if (track > 0)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main()
{
  int n{5}, cows{3}, stalls[]{1, 2, 4, 8, 9}, ans{};

  int s{}, e{stalls[n - 1] - stalls[0]};

  while (s <= e)
  {
    int mid{(s + e) / 2};

    if (checkDistance(stalls, n, cows, mid))
    {
      ans = mid;
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
    }
  }

  cout << ans << endl;
}
