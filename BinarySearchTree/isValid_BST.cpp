#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool isValidBST(vector<int> &order)
{
  for (int i = 0; i < order.size() - 1; i++)
  {
    if (order[i] < order[i + 1])
    {
      continue;
    }
    else
    {
      return false;
    }
  }
  return true;
}
