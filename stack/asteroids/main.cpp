#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> asteroidCollision(vector<int> &asteroids)
{
  stack<int> stk;
  for (int i : asteroids)
  {
    if (!stk.empty())
    {
      if (stk.top() > 0)
      {
        if (i < 0)
        {
          while (abs(i) > stk.top() && !stk.empty() && stk.top() > 0)
          {
            stk.pop();
          }
          if (stk.empty())
          {
            stk.push(i);
          }
          else if (abs(i) == stk.top())
          {
            stk.pop();
          }
          else if (i < 0 && stk.top() < 0)
          {
            stk.push(i);
          }
        }
        else
        {
          stk.push(i);
        }
      }
      else
      {
        stk.push(i);
      }
    }
    else
    {
      stk.push(i);
    }
  }
  cout << 1 << endl;
  vector<int> ans;
  while (!stk.empty())
  {
    ans.push_back(stk.top());
    stk.pop();
  }
  reverse(ans.begin(), ans.end());

  return ans;
}

int main()
{
  vector<int> asteroids{1, -2, -2, -2};
  vector<int> ans = asteroidCollision(asteroids);
  for (int i : ans)
  {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}