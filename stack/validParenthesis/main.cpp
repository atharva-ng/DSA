#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParenthesis(string s)
{
  // Write your code here.

  stack<char> stk;
  if (((s.length() % 2) != 0))
  {
    return false;
  }
  for (auto it : s)
  {
    if (stk.empty() and ((it == ')') or (it == ']') or (it == '}')))
    {
      return false;
    }
    else
    {
      if ((it == '{') or (it == '[') or (it == '('))
      {
        stk.push(it);
      }
      else
      {
        char c = stk.top();
        if ((c == '(' and it == ')') or (c == '[' and it == ']') or (c == '{' and it == '}'))
        {
          stk.pop();
        }
        else
        {
          return false;
        }
      }
    }
  }

  return stk.empty();
}

int main()
{
  string s;
  cin >> s;
  if (isValidParenthesis(s))
  {
    cout << "Blanaced" << endl;
  }
  else
  {
    cout << "Not Balanced" << endl;
  }
}