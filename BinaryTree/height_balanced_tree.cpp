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

int dfsHeight(TreeNode *root)
{
  if (root == NULL)
    return 0;
  int lh = dfsHeight(root->left);
  if (lh == -1)
    return -1;
  int rh = dfsHeight(root->right);
  if (rh == -1)
    return -1;
  if (abs(rh - lh) > 1)
    return -1;
  return 1 + max(lh, rh);
}

bool isBalancedBT(TreeNode *root)
{
  return dfsHeight(root) != -1;
}