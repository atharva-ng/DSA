#include <iostream>
#include <vector>
#include <stack>
#include "solution.h"

using namespace std;
int main()
{
  Solution A;
  vector<int> vec;
  vector<vector<int>> adj(2);
  adj.at(0).push_back(1);
  adj.at(0).push_back(0);
  // adj.at(1).push_back(1);
  // adj.at(1).push_back(0);
  vec = A.findOrder(2, adj);
  for (int i : vec)
  {
    cout << i << endl;
  }
}