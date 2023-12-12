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

Node *deleteMiddle(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *slow = head;
  Node *fast = head;
  fast = fast->next->next;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  slow->next = slow->next->next;
  return head;
}