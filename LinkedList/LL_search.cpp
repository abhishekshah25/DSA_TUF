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

int searchInLinkedList(Node *head, int k)
{
  Node *mover = head;
  while (mover)
  {
    if (mover->data == k)
      return 1;
    mover = mover->next;
  }
  return 0;
}