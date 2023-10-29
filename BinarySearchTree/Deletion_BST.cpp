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

TreeNode *deleteNode(TreeNode *root, int key)
{
  if (!root)
    return NULL;
  if (key < root->data)
    root->left = deleteNode(root->left, key);
  else if (key > root->data)
    root->right = deleteNode(root->right, key);
  else
  {
    if (!root->left && !root->right)
      return NULL;
    else if (!root->left)
      return root->right;
    else if (!root->right)
      return root->left;
    else
    {
      TreeNode *temp = root->right;
      while (temp->left)
        temp = temp->left;
      temp->left = root->left;
      return root->right;
    }
    return root;
  }
};