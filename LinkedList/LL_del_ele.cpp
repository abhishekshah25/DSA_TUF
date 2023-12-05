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

Node *removeElement(Node *head, int val)
{
  if (head == NULL)
    return head;
  if (head->data == val)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
  }

  Node *prev = NULL;
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == val)
    {
      prev->next = prev->next->next;
      delete temp;
      break;
    }
    prev = temp;
    temp = temp->next;
  }
  return head;
}