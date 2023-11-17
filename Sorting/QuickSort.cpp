#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int partitionArray(int input[], int start, int end)
{

  int pivot = input[start];
  int i = start, j = end;

  while (i < j)
  {

    while (input[i] <= pivot && i <= end - 1)
    {
      i++;
    }

    while (input[j] > pivot && j >= start + 1)
    {
      j--;
    }
    if (i < j)
      swap(input[i], input[j]);
  }
  swap(input[start], input[j]);
  return j;
}

void quickSort(int input[], int start, int end)
{

  if (start >= end)
    return;
  int pindex = partitionArray(input, start, end);
  quickSort(input, start, pindex - 1);
  quickSort(input, pindex + 1, end);
}