#include <iostream>
#include <climits>

using namespace std;

int numPrata(int *count, int timeMid, int prata)
{
  int total{};

  for (int i{}; i < 8; i++)
  {
    if (count[i] > 0)
    {
      int n{1}, c{count[i]}, time{};

      // int start{}, end{prata}, mid{};

      // while (start <= end)
      // {
      //   mid = (start + end) / 2;
      //   time = (i + 1) * (mid * (mid + 1) / 2);
      //   if(time > timeMid){

      //   }
      // }

      // while (true)
      // {
      //   time = (i + 1) * (n * (n + 1) / 2);
      //   if (time < timeMid)
      //   {
      //     n++;
      //   }
      //   else if (time == timeMid)
      //   {
      //     break;
      //   }
      //   else
      //   {
      //     n--;
      //     break;
      //   }
      // }

      total = total + (n * c);

      if (total >= prata)
      {
        i = 10;
      }
    }
  }
  return total;
}

int giveMinTime(int prata, int *count)
{
  int start{}, end{INT_MAX}, mid{}, ans{};

  while (start <= end)
  {

    mid = (start + end) / 2;
    int numParataItr{numPrata(count, mid, prata)};
    if (numParataItr >= prata)
    {
      ans = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }
  return ans;
}

int main()
{
  int prata{}, n{}, count[8]{}, buff{};

  cin >> prata >> n;

  for (int i{}; i < n; i++)
  {
    cin >> buff;
    count[buff - 1] = count[buff - 1] + 1;
  }

  cout << giveMinTime(prata, count) << endl;
}