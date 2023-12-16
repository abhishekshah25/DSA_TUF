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

Node *constructDLL(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *prev = NULL;
  for (int i = 1; i < arr.size(); i++)
  {
    Node *front = new Node(arr[i], nullptr, prev);
    prev->next = front;
    prev = front;
  }
  return head;
}