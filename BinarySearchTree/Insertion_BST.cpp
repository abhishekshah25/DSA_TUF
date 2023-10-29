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

TreeNode *insertionInBST(TreeNode *root, int val)
{
  if (root == NULL)
    return new TreeNode(val);
  if (val < root->data)
  {
    root->left = insertionInBST(root->left, val);
  }
  if (val > root->data)
  {
    root->right = insertionInBST(root->right, val);
  }
  return root;
}