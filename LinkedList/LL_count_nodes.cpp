#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    this->data = val;
    next = nullptr;
  }

  Node(int vals, Node *nexts)
  {
    this->data = vals;
    next = nexts;
  }
};

int length(Node *head)
{
  int cnt = 0;
  Node *mover = head;
  while (mover)
  {
    mover = mover->next;
    cnt++;
  }
  return cnt;
}