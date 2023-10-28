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

vector<int> postOrder(TreeNode *root)
{
  vector<int> postOrd;
  stack<TreeNode *> s1, s2;
  if (root == NULL)
    return postOrd;
  s1.push(root);
  while (!s1.empty())
  {
    root = s1.top();
    s1.pop();
    s2.push(root);
    if (root->left)
    {
      s1.push(root->left);
    }
    if (root->right)
    {
      s1.push(root->right);
    }
  }
  while (!s2.empty())
  {
    postOrd.push_back(s2.top()->data);
    s2.pop();
  }
  return postOrd;
}