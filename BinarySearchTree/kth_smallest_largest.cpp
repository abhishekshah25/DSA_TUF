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

int findKthSmallest(TreeNode *root, int &k, int &counter)
{
  if (root == NULL)
    return -1;
  int left = findKthSmallest(root->left, k, counter);
  if (left != -1)
  {
    return left;
  }
  counter++;
  if (counter == k)
    return root->data;
  return findKthSmallest(root->right, k, counter);
}

int kthSmallest(TreeNode *root, int k)
{
  int counter = 0;
  return findKthSmallest(root, k, counter);
}

int findKthLargest(TreeNode *root, int &k, int &counter)
{
  if (root == NULL)
    return -1;
  int right = findKthLargest(root->right, k, counter);
  if (right != -1)
  {
    return right;
  }
  counter++;
  if (counter == k)
    return root->data;
  return findKthLargest(root->left, k, counter);
}

int kthLargest(TreeNode *root, int k)
{
  int counter = 0;
  return findKthLargest(root, k, counter);
}