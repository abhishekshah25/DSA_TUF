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

void postOrderTrav(TreeNode *curr, vector<int> &postOrd)
{
  if (curr == NULL)
    return;
  postOrderTrav(curr->left, postOrd);
  postOrderTrav(curr->right, postOrd);
  postOrd.push_back(curr->data);
}