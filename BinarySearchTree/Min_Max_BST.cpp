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

int minVal(TreeNode *root)
{
  if (root == NULL)
    return -1;
  while (root->left)
  {
    root = root->left;
  }
  return root->data;
}

int maxVal(TreeNode *root)
{
  if (root == NULL)
    return -1;
  while (root->right)
  {
    root = root->right;
  }
  return root->data;
}