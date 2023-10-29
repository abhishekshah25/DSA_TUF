#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> printNos(int x)
{
  if (x == 0)
    return {};
  vector<int> a = printNos(x - 1);
  a.push_back(x);
  return a;
}