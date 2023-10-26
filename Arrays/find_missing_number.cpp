#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int missingNumber(vector<int> &a, int N)
{
  int sum = N * (N + 1) / 2;
  int sum_miss = 0;
  for (int i = 0; i < N - 1; i++)
  {
    sum_miss += a[i];
  }
  int missing_num = sum - sum_miss;
  return missing_num;
}