#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int largestElement(vector<int> &arr, int n)
{
  int maximum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > maximum)
    {
      maximum = arr[i];
    }
  }
  return maximum;
}
