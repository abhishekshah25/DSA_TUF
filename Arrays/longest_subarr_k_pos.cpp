#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k)
{
  int n = a.size();
  int left = 0;
  int right = 0;
  long long sum = a[0];
  int maxLen = 0;

  while (right < n)
  {
    while (left <= right && sum > k)
    {
      sum = sum - a[left];
      left++;
    }
    if (sum == k)
    {
      maxLen = max(maxLen, right - left + 1);
    }
    right++;
    if (right < n)
    {
      sum = sum + a[right];
    }
  }
  return maxLen;
}