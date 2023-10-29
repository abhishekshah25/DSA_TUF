#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<long long> factorialNumbers(long long n)
{
  vector<long long> v;
  long long ans = 1;
  for (int i = 1; i <= n; i++)
  {
    ans *= i;
    if (ans <= n)
    {
      v.push_back(ans);
    }
    else
    {
      break;
    }
  }
  return v;
}