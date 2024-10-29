#ifndef SOLUTION_H
#define SOLUTION_H
#include <vector>
#include <stack>

using namespace std;
class Solution
{
public:
  bool dfs(vector<vector<int>> &adj, vector<bool> &visited, vector<bool> &stkcb, stack<int> &stk, int src)
  {
    visited[src] = true;
    stkcb[src] = true;
    for (int i : adj[src])
    {
      if (!visited[i])
      {
        if (!dfs(adj, visited, stkcb, stk, i))
        {
          return false;
        }
      }
      else
      {
        if (stkcb[i])
        {
          return false;
        }
      }
    }
    stk.push(src);
    stkcb[src] = false;
    return true;
  }
  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
  {
    stack<int> stk;
    vector<vector<int>> adj(numCourses);
    vector<int> ans;
    vector<bool> visited(numCourses, false), stkcb(numCourses, false);

    for (auto i : prerequisites)
    {
      if (i.size() != 0)
        adj[i[1]].push_back(i[0]);
    }

    for (int i{}; i < numCourses; i++)
    {
      if (!visited[i])
      {
        if (dfs(adj, visited, stkcb, stk, i) == false)
        {
          vector<int> buff;
          return buff;
        }
      }
    }

    while (!stk.empty())
    {
      ans.push_back(stk.top());
      stk.pop();
    }

    return ans;
  }
};
#endif