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

Node *ListNode::get_middle(Node *nod) {
  /*Using slow fast turtle rabbit algorithm to
    get the the middle of the linkedlist */

  if (nod == NULL) {
    cout << "Head node is null\n";
    return NULL;
  }

  Node *slow = nod;
  Node *fast = nod;

  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  /*slow node points to the middle of the node */
  cout << "Value:" << slow->value << "\n";

  return slow;
}
/* assuming the nodes are sorted */
void ListNode::merge_twoLists(Node *node1, Node *node2) {

  if (node1 == NULL || node2 == NULL) {
    if (node1 == NULL) {
      cout << "node 1 head is null \n";
      return;
    } else {
      cout << "node 2 head is null \n";
      return;
    }
  }
  Node *head = new Node(0);
  Node *dummy = head;
  while (node1 != nullptr && node2 != nullptr) {
    if (node1->value < node2->value) {
      dummy->next = node1;
      node1 = node1->next;
    } else {
      dummy->next = node2;
      node2 = node2->next;
    }
    dummy = dummy->next;
  }

  dummy->next = (node1 == nullptr) ? node2 : node1;

  print_node(head->next);
  return;
}