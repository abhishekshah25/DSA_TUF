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

Node *removePosition(Node *head, int k)
{
  if (head == NULL)
    return head;
  if (k == 1)
  {
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
  }
  int cnt = 0;
  Node *prev = NULL;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == k)
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