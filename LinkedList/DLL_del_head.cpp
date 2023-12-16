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

Node *removesHead(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *tail = head;
  head = head->next;
  head->prev = nullptr;
  tail->next = nullptr;
  delete tail;
  return head;
}