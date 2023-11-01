#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b)
{
  set<int> s;
  vector<int> Union;
  for (int i = 0; i < a.size(); i++)
  {
    s.insert(a[i]);
  }
  for (int j = 0; j < b.size(); j++)
  {
    s.insert(b[j]);
  }
  for (auto &it : s)
  {
    Union.push_back(it);
  }
  return Union;
}