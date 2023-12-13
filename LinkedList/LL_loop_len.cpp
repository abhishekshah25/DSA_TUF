#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;

  Node(int val)
  {
    this->data = val;
    this->next = nullptr;
  }

  Node(int vals, Node *nexts)
  {
    this->data = vals;
    this->next = nexts;
  }
};

int findLen(Node *slow, Node *fast)
{
  int cnt = 1;
  fast = fast->next;
  while (slow != fast)
  {
    cnt++;
    fast = fast->next;
  }
  return cnt;
}

int lengthOfLoop(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      return findLen(slow, fast);
    }
  }
  return 0;
}
