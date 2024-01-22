#include <iostream>

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

int replaceSum(node *root)
{
  if (root == NULL)
  {
    return 0;
  }

  if (root->left == NULL && root->right == NULL)
  {
    return root->data;
  }

  int temp = root->data;
  int leftSum = replaceSum(root->left);
  int rightSum = replaceSum(root->right);
  root->data = leftSum + rightSum;

  return root->data + temp;
}

int main()
{
  node *tree1 = buildTree();
  printPre(tree1);
  cout << endl;

  replaceSum(tree1);
  printPre(tree1);
  cout << endl;

  return 0;
}