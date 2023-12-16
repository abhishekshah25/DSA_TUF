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

Node *deleteHead(Node *head)
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

Node *deleteTail(Node *head)
{
  if (head == NULL || head->next == NULL)
    return NULL;
  Node *tail = head;
  while (tail != NULL)
  {
    tail = tail->next;
  }
  Node *newTail = tail->prev;
  newTail->next = nullptr;
  tail->prev = nullptr;
  delete (tail);
  return head;
}

Node *removeKthElement(Node *head, int k)
{
  if (head == NULL)
    return NULL;

  int cnt = 0;
  Node *kNode = head;
  while (kNode != NULL)
  {
    cnt++;
    if (cnt == k)
      break;
    kNode = kNode->next;
  }
  Node *back = kNode->prev;
  Node *front = kNode->next;
  if (front == NULL && back == NULL)
    return NULL;
  else if (back == NULL)
    return deleteHead(head);
  else if (front == NULL)
    return deleteTail(head);

  back->next = front;
  front->prev = back;

  kNode->next = nullptr;
  kNode->prev = nullptr;
  delete (kNode);
  return head;
}