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

Node *findMiddle(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}