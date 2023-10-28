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
    left = NULL, right = NULL;
  }
};

void traverseLeft(TreeNode *root, vector<int> &ans)
{
  if (root == NULL || !root->left && !root->right)
    return;
  ans.push_back(root->data);
  if (root->left)
    traverseLeft(root->left, ans);
  else
    traverseLeft(root->right, ans);
}
void traverseLeaf(TreeNode *root, vector<int> &ans)
{
  if (root == NULL)
    return;
  if (!root->left && !root->right)
  {
    ans.push_back(root->data);
    return;
  }
  traverseLeaf(root->left, ans);
  traverseLeaf(root->right, ans);
}
void traverseRight(TreeNode *root, vector<int> &ans)
{
  if (root == NULL || !root->left && !root->right)
    return;
  if (root->right)
    traverseRight(root->right, ans);
  else
    traverseRight(root->left, ans);
  ans.push_back(root->data);
}
vector<int> traverseBoundary(TreeNode *root)
{
  vector<int> ans;
  if (root == NULL)
    return ans;
  ans.push_back(root->data);
  traverseLeft(root->left, ans);
  traverseLeaf(root->left, ans);
  traverseLeaf(root->right, ans);
  traverseRight(root->right, ans);
  return ans;
}