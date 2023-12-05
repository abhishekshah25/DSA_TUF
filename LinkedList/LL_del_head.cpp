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

Node *removesHead(Node *head)
{
  if (head == NULL)
    return head;
  Node *temp = head;
  head = head->next;
  delete temp;
  return head;
}
