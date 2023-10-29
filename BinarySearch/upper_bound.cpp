#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int upperBound(vector<int> arr, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int ans = n;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] > x)
    {
      ans = mid;
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return ans;
}