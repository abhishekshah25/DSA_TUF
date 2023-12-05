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

Node *removesTail(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *temp = head;
  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;

  return head;
}