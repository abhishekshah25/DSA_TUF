#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int firstOccurence(vector<int> &arr, int n, int k)
{
  int low = 0;
  int high = n - 1;
  int first = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == k)
    {
      first = mid;
      high = mid - 1;
    }
    else if (arr[mid] > k)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return first;
}

int lastOccurence(vector<int> &arr, int n, int k)
{
  int low = 0;
  int high = n - 1;
  int last = -1;
  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (arr[mid] == k)
    {
      last = mid;
      low = mid + 1;
    }
    else if (arr[mid] > k)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
  int first = firstOccurence(arr, n, k);
  if (first == -1)
    return {-1, -1};
  int last = lastOccurence(arr, n, k);
  return {first, last};
}