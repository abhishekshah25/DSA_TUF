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

int height_bt(TreeNode *root)
{
  if (root == NULL)
    return 0;
  int lh = height_bt(root->left);
  int rh = height_bt(root->right);
  return 1 + max(lh, rh);
}