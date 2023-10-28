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

void allTrav(TreeNode *root, vector<int> &pre, vector<int> &in, vector<int> &post)
{
  stack<pair<TreeNode *, int>> st;
  if (root == NULL)
    return;
  st.push({root, 1});
  while (!st.empty())
  {
    auto it = st.top();
    st.pop();
    if (it.second == 1)
    {
      pre.push_back(it.first->data);
      it.second++;
      st.push(it);

      if (it.first->left != NULL)
      {
        st.push({it.first->left, 1});
      }
    }

    else if (it.second == 2)
    {
      in.push_back(it.first->data);
      it.second++;
      st.push(it);
      if (it.first->right != NULL)
      {
        st.push({it.first->right, 1});
      }
    }
    else
    {
      post.push_back(it.first->data);
    }
  }
}