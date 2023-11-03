#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> getFrequencies(vector<int> &v)
{
  map<int, int> mpp;

  for (int i = 0; i < v.size(); i++)
  {
    mpp[v[i]]++;
  }

  int maxFreq = 0, minFreq = v.size();
  int maxEle = 0, minEle = 0;

  for (auto it : mpp)
  {

    int count = it.second;
    int element = it.first;

    if (count > maxFreq)
    {
      maxFreq = count;
      maxEle = element;
    }

    if (count < minFreq)
    {
      minFreq = count;
      minEle = element;
    }
  }
  return {maxEle, minEle};
}
