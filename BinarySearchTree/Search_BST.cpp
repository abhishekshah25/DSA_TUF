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

bool searchInBST(TreeNode *root, int x)
{
  while (root)
  {
    if (root->data == x)
      return true;
    else if (x < root->data)
      root = root->left;
    else if (x > root->data)
      root = root->right;
    else
      return false;
  }
}