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
  Node *temp = head;
  Node *prev = NULL;
  while (temp != NULL)
  {
    Node *front = temp->next;
    temp->next = prev;
    prev = temp;
    temp = front;
  }
  return prev;
}