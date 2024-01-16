#include "listnode.h"
#include "permutation.h"
#include "solution.h"

#define LISTNODE 1
#define LISTNODE_MERGE 1
int main() {
  // Solution sol;
  // int target = 100;
  // std::vector<int> vec = {1, 2, 3};

  /* Find the number of ways you can find the answer */
  // sol.solution(target, vec);
  // sol.combination(target, vec);

  // sol.min_combination(target, vec);

  // vector<int> result = sol.get_combination(target, vec);

  // #ifdef DEBUG_PRINT
  //   for (int i = 0; i < result.size(); i++) {
  //     cout << result[i] << " ";
  //   }
  // #endif

  // Permutation perm;
  // perm.permute(vec);

#ifdef LISTNODE
  Node *node1 = new Node(2);
  Node *node2 = new Node(4);
  Node *node3 = new Node(6);
  Node *node4 = new Node(8);
  Node *node5 = new Node(10);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = node5;
  node5->next = nullptr;

  ListNode ls;

  // ls.print_node(node1);
  // ls.reverse_node(node1);

  // ls.get_middle(node1);
#ifdef LISTNODE_MERGE
  Node *node6 = new Node(1);
  Node *node7 = new Node(3);
  Node *node8 = new Node(5);
  Node *node9 = new Node(7);
  Node *node10 = new Node(9);

  node6->next = node7;
  node7->next = node8;
  node8->next = node9;
  node9->next = node10;
  node10->next = nullptr;

  ls.merge_twoLists(node1, node6);

#endif

#endif
  return 0;
}