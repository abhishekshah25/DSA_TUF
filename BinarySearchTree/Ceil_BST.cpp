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

int findCeil(TreeNode *node, int x)
{
  int ceil = -1;
  while (node)
  {
    if (x == node->data)
    {
      ceil = node->data;
      return ceil;
    }
    if (x > node->data)
    {
      node = node->right;
    }
    else
    {
      ceil = node->data;
      node = node->left;
    }
  }
  return ceil;
}