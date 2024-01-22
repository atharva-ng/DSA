#include <iostream>
// #include <utility>
#include <queue>

using namespace std;

class node
{
public:
  int data;

  node *left;
  node *right;

  node(int dataInp)
  {
    data = dataInp;
    left = NULL;
    right = NULL;
  }
};

class Pair
{
public:
  int height{};
  int diameter{};
};

node *buildTree()
{
  int d;
  cin >> d;

  if (d == -1)
  {
    return NULL;
  }

  node *root = new node(d);
  root->left = buildTree();
  root->right = buildTree();

  return root;
}

void printPre(node *root)
{
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  printPre(root->left);
  printPre(root->right);
}

void printIn(node *root)
{
  if (root == NULL)
  {
    return;
  }
  printIn(root->left);
  cout << root->data << " ";
  printIn(root->right);
}

void printPost(node *root)
{
  if (root == NULL)
  {
    return;
  }
  printPost(root->left);
  printPost(root->right);
  cout << root->data << " ";
}

int maxHeight(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int heightLeft{maxHeight(root->left)}, heightRight{maxHeight(root->right)};

  return max(heightLeft, heightRight) + 1;
}

void printKthLevel(node *root, int k)
{
  if (root == NULL)
  {
    cout << " ";
    return;
  }

  if (k == 1)
  {
    cout << root->data << " ";
  }
  else
  {
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
  }
}

void printTree(node *root)
{
  int height{maxHeight(root)};
  for (int i{}; i < height; i++)
  {
    printKthLevel(root, i + 1);
    cout << endl;
  }
}

void bfs(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    if (q.front() == NULL)
    {
      q.pop();
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      node *f = q.front();
      cout << f->data << ", ";
      q.pop();

      if (f->left)
      {
        q.push(f->left);
      }

      if (f->right)
      {
        q.push(f->right);
      }
    }
  }
}

int countNodes(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  return 1 + countNodes(root->left) + countNodes(root->right);
}

int sumNodes(node *root)
{
  if (root == NULL)
  {
    return 0;
  }
  return root->data + sumNodes(root->left) + sumNodes(root->right);
}

int diameter(node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  int h1{}, opM{}, h2{}, opL{}, opR{};
  h1 = maxHeight(root->left);
  h2 = maxHeight(root->right);
  opM = h1 + h2;
  opL = diameter(root->left);
  opR = diameter(root->right);
  return max(opL, max(opM, opR));
}

Pair diameterOpt(node *root)
{
  Pair p;
  if (root == NULL)
  {
    p.height = 0;
    p.diameter = 0;
    return p;
  }
  Pair left = diameterOpt(root->left);
  Pair right = diameterOpt(root->right);

  p.height = max(left.height, right.height) + 1;
  p.diameter = max(left.height + right.height, max(left.diameter, right.diameter));
  return p;
}

class hbPair
{
public:
  int height;
  bool balanced;
};

hbPair hbTree(node *root)
{
  hbPair p;
  if (root == NULL)
  {
    p.height = 0;
    p.balanced = true;
    return p;
  }

  hbPair left = hbTree(root->left);
  hbPair right = hbTree(root->right);

  p.height = max(left.height, right.height) + 1;
  if (abs(left.height - right.height) <= 1 && left.balanced && right.balanced)
  {
    p.balanced = true;
  }
  else
  {
    p.balanced = false;
  }
  return p;
}

int main()
{
  node *tree1 = buildTree();
  printPre(tree1);
  cout << endl;

  printIn(tree1);
  cout << endl;

  printPost(tree1);
  cout << endl;
  cout << maxHeight(tree1) << endl;

  cout << endl;

  printKthLevel(tree1, 2);
  cout << endl;

  printTree(tree1);

  bfs(tree1);
  cout << endl;

  int number{countNodes(tree1)};
  cout << "Number of Nodes: " << number << endl;

  int sumNodesVar{sumNodes(tree1)};
  cout << "Sum of Nodes: " << sumNodesVar << endl;

  Pair D1{diameterOpt(tree1)};
  cout << "Diameter: " << D1.diameter << endl;

  int D2{diameter(tree1)};
  cout << "Diameter: " << D2 << endl;

  hbPair p = hbTree(tree1);
  cout << "Height Balanced: " << p.balanced << endl;

  return 0;
}

// 1 4 27 -1 -1 13 2 -1 -1 3 -1 -1 9 91 3 4 -1 -1 -1 -1 -1 -1

// 1 4 27 -1 -1 13 2 -1 -1 3 -1 -1 9 91 -1 -1 -1 -1