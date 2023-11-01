#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long getMaximumProfit(long *values, int n)
{
  long aheadBuy, aheadNotBuy, curBuy, curNotBuy;
  aheadBuy = 0;
  aheadNotBuy = 0;

  for (int index = n - 1; index >= 0; index--)
  {

    curNotBuy = max(values[index] + aheadBuy, 0 + aheadNotBuy);
    curBuy = max(-values[index] + aheadNotBuy, 0 + aheadBuy);

    aheadBuy = curBuy;
    aheadNotBuy = curNotBuy;
  }
  return aheadBuy;
}