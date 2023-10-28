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

void preOrderTrav(TreeNode *curr, vector<int> &preOrd)
{
  if (curr == NULL)
    return;
  preOrd.push_back(curr->data);
  preOrderTrav(curr->left, preOrd);
  preOrderTrav(curr->right, preOrd);
}