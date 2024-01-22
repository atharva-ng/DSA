#include <iostream>
#include <stack>

using namespace std;

void insertBottom(stack<int> &s, int x)
{
  if (s.empty())
  {
    s.push(x);
  }
  else
  {
    int temp{s.top()};
    s.pop();
    insertBottom(s, x);
    s.push(temp);
  }
}

void reverseStack(stack<int> &s)
{
  int top{};
  if (s.empty())
  {
    return;
  }
  else
  {
    top = s.top();
    s.pop();
    reverseStack(s);
    insertBottom(s, top);
  }
}

int main()
{
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);

  reverseStack(st);

  while (!st.empty())
  {
    cout << st.top() << endl;
    st.pop();
  }
}