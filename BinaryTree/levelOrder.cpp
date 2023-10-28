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

vector<int> levelOrder(TreeNode *root)
{
  vector<int> ans;
  if (root == NULL)
    return ans;
  queue<TreeNode *> q;
  q.push(root);
  while (q.empty() == false)
  {
    TreeNode *t = q.front();
    int temp = t->data;
    ans.push_back(temp);
    q.pop();
    if (t->left)
    {
      q.push(t->left);
    }
    if (t->right)
    {
      q.push(t->right);
    }
  }
  return ans;
}