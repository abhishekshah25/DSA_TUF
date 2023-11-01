#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &prices)
{
  int best_buy = prices[0];
  int profit = 0;
  for (int index = 1; index < prices.size(); index++)
  {
    int cost = prices[index] - best_buy;
    profit = max(profit, cost);
    best_buy = min(best_buy, prices[index]);
  }
  return profit;
}