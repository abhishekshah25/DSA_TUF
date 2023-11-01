#include <bits/stdc++.h>
#include <iostream>
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

bool isValidBST(TreeNode *root, int minimum, int maximum)
{
  if (!root)
    return true;
  if (root->data >= maximum || root->data < minimum)
    return false;
  return isValidBST(root->left, minimum, root->data) && isValidBST(root->right, root->data, maximum);
}

bool isBST(TreeNode *root)
{
  return isValidBST(root, INT_MIN, INT_MAX);
}