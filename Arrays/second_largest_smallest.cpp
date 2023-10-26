#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getSecondLargest(int n, vector<int> a)
{
  int secondlarge = INT_MIN;
  int large = INT_MIN;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > large)
    {
      secondlarge = large;
      large = a[i];
    }
    else if (a[i] != large && a[i] > secondlarge)
    {
      secondlarge = a[i];
    }
  }
  return secondlarge;
}

int getSecondSmallest(int n, vector<int> a)
{
  int secondSmallest = INT_MAX;
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    if (a[i] < smallest)
    {
      secondSmallest = smallest;
      smallest = a[i];
    }
    else if (a[i] != smallest && a[i] < secondSmallest)
    {
      secondSmallest = a[i];
    }
  }
  return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
  int secondLargest = getSecondLargest(n, a);
  int secondSmallest = getSecondSmallest(n, a);

  return {secondLargest, secondSmallest};
}
