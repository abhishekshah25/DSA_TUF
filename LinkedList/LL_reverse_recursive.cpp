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

Node *reverseLinkedList(Node *head)
{
  if (head == NULL || head->next == NULL)
    return head;

  Node *newNode = reverseLinkedList(head->next);
  head->next->next = head;
  head->next = NULL;
  return newNode;
}