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

vector<int> preOrder(TreeNode *root)
{
  vector<int> preOrd;
  if (root == NULL)
    return preOrd;
  stack<TreeNode *> st;
  st.push(root);
  while (!st.empty())
  {
    root = st.top();
    st.pop();
    preOrd.push_back(root->data);
    if (root->right != NULL)
    {
      st.push(root->right);
    }
    if (root->left != NULL)
    {
      st.push(root->left);
    }
  }
  return preOrd;
}