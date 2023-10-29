#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int search(vector<int> &nums, int target)
{
  int low = 0;
  int n = nums.size();
  int high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (nums[mid] < target)
      low = mid + 1;
    else if (nums[mid] > target)
      high = mid - 1;
    else
      return mid;
  }
  return -1;
}