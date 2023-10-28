#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int data;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int val)
  {
    data = val;
    left = right = NULL;
  }
};

bool identicalTrees(TreeNode *root1, TreeNode *root2)
{
  if (root1 == NULL && root2 == NULL)
  {
    return true;
  }
  if (root1 == NULL && root2 != NULL)
  {
    return false;
  }
  if (root1 != NULL && root2 == NULL)
  {
    return false;
  }
  bool left = identicalTrees(root1->left, root2->left);
  bool right = identicalTrees(root1->right, root2->right);
  bool value = root1->data == root2->data;
  if (left && right && value)
  {
    return true;
  }
  else
  {
    return false;
  }
}