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

int findFloor(TreeNode *node, int x)
{
  int floor = -1;
  while (node)
  {
    if (x == node->data)
    {
      floor = node->data;
      return floor;
    }
    if (x < node->data)
    {
      node = node->left;
    }
    else
    {
      floor = node->data;
      node = node->right;
    }
  }
  return floor;
}