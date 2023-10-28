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

int findMaxPathSum(TreeNode *root, int &maxi)
{
  if (root == NULL)
    return 0;
  int leftMax = max(0, findMaxPathSum(root->left, maxi));
  int rightMax = max(0, findMaxPathSum(root->right, maxi));
  int val = root->data;
  maxi = max(maxi, (leftMax + rightMax) + val);
  return max(leftMax, rightMax) + val;
}

int maxPathSum(TreeNode *root)
{
  int maxi = INT_MIN;
  findMaxPathSum(root, maxi);
  return maxi;
}