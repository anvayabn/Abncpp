#pragma once
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

struct Node {
  unsigned value;
  Node *next;
  Node(unsigned x) : value(x), next(nullptr){};
  Node(unsigned x, Node *next) : value(x), next(next){};
};

class ListNode {
public:
  /*reverse the linked Linked provided
    head of the linked list */
  void reverse_node(Node *head);
  void print_node(Node *nod);
  Node *get_middle(Node *nod);

  void merge_twoLists(Node *node1, Node *node2);
};