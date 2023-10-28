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

void inOrderTrav(TreeNode *curr, vector<int> &inOrd)
{
  if (curr == NULL)
    return;
  inOrderTrav(curr->left, inOrd);
  inOrd.push_back(curr->data);
  inOrderTrav(curr->right, inOrd);
}