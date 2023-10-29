#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
  if (x < 1)
    return {};
  vector<int> v = printNos(x - 1);
  v.insert(v.begin(), x);
  return v;
}