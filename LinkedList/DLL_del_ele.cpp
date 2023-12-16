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

void deleteNode(Node *temp)
{
  Node *back = temp->prev;
  Node *front = temp->next;

  if (front == NULL)
  {
    back->next = nullptr;
    temp->prev = nullptr;
    delete (temp);
    return;
  }
  back->next = front;
  front->prev = back;
  temp->next = nullptr;
  temp->prev = nullptr;
  delete (temp);
}