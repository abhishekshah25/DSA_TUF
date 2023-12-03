#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
  int data;
  Node *next;

  Node(int val)
  {
    this->data = val;
    next = nullptr;
  }

  Node(int vals, Node *nexts)
  {
    this->data = vals;
    next = nexts;
  }
};

Node *constructLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}