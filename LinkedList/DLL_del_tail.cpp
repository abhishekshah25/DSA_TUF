#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;

  Node(int val)
  {
    this->data = val;
    next = NULL;
    prev = NULL;
  }
  Node(int val, Node *forward, Node *back)
  {
    this->data = val;
    next = forward;
    prev = back;
  }
};

Node *removesTail(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *tail = head;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }
  Node *newTail = tail->prev;
  newTail->next = nullptr;
  tail->prev = nullptr;
  delete tail;
  return head;
}