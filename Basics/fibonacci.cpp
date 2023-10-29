#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> generateFibonacciNumbers(int n)
{
  vector<int> fib;
  int a = 0, b = 1, s = 0;
  for (int i = 0; i < n; i++)
  {
    fib.push_back(a);
    s = a + b;
    a = b;
    b = s;
  }
  return fib;
}