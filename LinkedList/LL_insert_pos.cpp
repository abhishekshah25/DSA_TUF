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

Node *insertPosition(Node *head, int el, int k)
{
  if (head == NULL)
  {
    if (k == 1)
    {
      return new Node(el);
    }
    else
    {
      return head;
    }
  }

  if (k == 1)
  {
    return new Node(el, head);
  }

  int cnt = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    cnt++;
    if (cnt == (k - 1))
    {
      Node *x = new Node(el, temp->next);
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}