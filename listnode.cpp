#include "listnode.h"

void ListNode::print_node(Node *head) {

  Node *ptr = head;
  while (ptr != NULL) {
    cout << "[" << ptr->value << "]"
         << "->";
    ptr = ptr->next;
  }
  cout << "[Null]"
       << "\n";
}

void ListNode::reverse_node(Node *nod) {
  /* if the nod is null there is no point continuing */
  if (nod == nullptr) {
    return;
  }
  Node *prev = NULL;
  Node *head = nod;
  while (head != NULL) {
    Node *next = head->next;

    head->next = prev;
    prev = head;
    head = next;
  }

  /*print the reverse order of the */
  cout << "Printing Reverse order"
       << "\n";
  print_node(prev);
}