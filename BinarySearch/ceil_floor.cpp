#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getFloor(vector<int> &a, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int ans = -1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] <= x)
    {
      ans = mid;
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
};

int getCeil(vector<int> &a, int n, int x)
{
  int low = 0;
  int high = n - 1;
  int ans = -1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (a[mid] >= x)
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

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
  int f = getFloor(a, n, x);
  int c = getCeil(a, n, x);
  return make_pair(f, c);
}