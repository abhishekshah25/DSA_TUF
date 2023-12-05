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

Node *insertValue(Node *head, int el, int val)
{
  if (head == NULL)
    return NULL;
  if (head->data == val)
  {
    return new Node(el, head);
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    if (temp->next->data == val)
    {
      Node *x = new Node(el, temp->next);
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}