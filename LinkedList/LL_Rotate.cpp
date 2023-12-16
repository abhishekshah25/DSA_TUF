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

Node *findLen(Node *temp, int k)
{
  int cnt = 1;
  while (temp != NULL)
  {
    if (cnt == k)
      return temp;
    cnt++;
    temp = temp->next;
  }
  return temp;
}

Node *rotate(Node *head, int k)
{
  if (head == NULL || k == 0)
    return head;
  Node *tail = head;
  int len = 1;
  while (tail->next != NULL)
  {
    tail = tail->next;
    len = len + 1;
  }
  if (k % len == 0)
    return head;
  k = k % len;
  tail->next = head;
  Node *newLastNode = findLen(head, len - k);
  head = newLastNode->next;
  newLastNode->next = NULL;
  return head;
}