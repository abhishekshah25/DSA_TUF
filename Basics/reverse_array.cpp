#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(int n, vector<int> &nums)
{
  vector<int> rev;
  for (int i = n - 1; i >= 0; i--)
  {
    rev.push_back(nums[i]);
  }
  return rev;
}