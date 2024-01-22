#include <iostream>
#include <stack>

using namespace std;

class Stack
{
private:
  stack<int> main;
  stack<int> min;
  stack<int> max;

public:
  void push(int x)
  {
    if (main.empty())
    {
      main.push(x);
      min.push(x);
      max.push(x);
    }
    else
    {
      int currMin = min.top();
      int currMax = max.top();

      main.push(x);

      if (currMin > x)
      {
        min.push(x);
      }
      else
      {
        min.push(currMin);
      }
      if (currMax < x)
      {
        max.push(x);
      }
      else
      {
        max.push(currMax);
      }
    }
  }

  int top()
  {
    return main.top();
  }

  int pop()
  {
    min.pop();
    max.pop();
    int temp = max.top();
    max.pop();
    return temp;
  }

  int getMin()
  {
    return min.top();
  }
  int getMax()
  {
    return max.top();
  }

  bool empty()
  {
    return main.empty();
  }
};

int main()
{
  Stack s;
  s.push(2);
  s.push(5);
  s.push(6);
  s.push(1);

  cout << "================================" << endl;
  cout << s.getMax() << endl;
  cout << s.getMin() << endl;

  while (!s.empty())
  {
    cout << s.pop() << endl;
  }
}