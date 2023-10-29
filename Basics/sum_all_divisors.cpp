#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sumOfAllDivisors(int n)
{
  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    int sum_i = 0;
    for (int j = 1; j <= i; j++)
    {
      if (i % j == 0)
      {
        sum_i = sum_i + j;
      }
    }
    sum = sum_i + sum;
  }
  return sum;
}
