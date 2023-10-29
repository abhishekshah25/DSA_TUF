#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkArmstrong(int n)
{
  double digits = 0;
  int ans = 0;
  int temp = n;

  while (temp > 0)
  {
    temp = temp / 10;
    digits++;
  }

  temp = n;

  while (temp > 0)
  {
    int i = temp % 10;
    temp = temp / 10;
    ans = ans + pow(i, digits);
  }
  if (ans == n)
  {
    return true;
  }
  else
  {
    return false;
  }
}
