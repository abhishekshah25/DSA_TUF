#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countDigits(int n)
{
  int cnt = 0;
  int div = n;
  while (n > 0)
  {
    int r = n % 10;
    if (r != 0 && div % r == 0)
    {
      cnt++;
    }
    n = n / 10;
  }
  return cnt;
}