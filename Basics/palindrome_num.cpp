#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{
  int rem, t = n, rev = 0;
  while (t > 0)
  {
    int rem = t % 10;
    rev = rev * 10 + rem;
    t = t / 10;
  }
  return rev == n ? true : false;
}