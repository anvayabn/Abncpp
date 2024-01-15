#include "listnode.h"
#include "permutation.h"
#include "solution.h"

#define LISTNODE 1

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
  Node *node3 = new Node(7);
  Node *node4 = new Node(9);

  node1->next = node2;
  node2->next = node3;
  node3->next = node4;
  node4->next = nullptr;

  ListNode ls;

  ls.print_node(node1);
  ls.reverse_node(node1);
#endif
  return 0;
}