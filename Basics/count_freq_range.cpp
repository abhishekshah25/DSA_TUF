#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> countFrequency(int n, int x, vector<int> &nums)
{
  // map<int,int> mpp;
  // vector<int> ans;
  // for(int i = 0; i < n; i++){
  //     mpp[nums[i]]++;
  // }
  // for(int j = 1; j <= n; j++){
  //     ans.push_back(mpp[j]);
  // }
  // return ans;

  vector<int> freq(n, 0);

  for (int i = 0; i < n; i++)
  {
    freq[nums[i] - 1]++;
  }
  return freq;
}