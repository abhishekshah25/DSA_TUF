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

vector<int> inOrder(TreeNode *root)
{
  vector<int> inOrd;
  stack<TreeNode *> st;
  TreeNode *temp = root;
  while (true)
  {
    if (temp != NULL)
    {
      st.push(temp);
      temp = temp->left;
    }
    else
    {
      if (st.empty() == true)
        break;
      temp = st.top();
      st.pop();
      inOrd.push_back(temp->data);
      temp = temp->right;
    }
  }
  return inOrd;
}