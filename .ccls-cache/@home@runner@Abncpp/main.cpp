#include "solution.h"

int main() {
  Solution sol;
  int target = 100;
  std::vector<int> vec = {50, 20, 10, 5, 1};

  /* Find the number of ways you can find the answer */
  // sol.solution(target, vec);
  // sol.combination(target, vec);

  // sol.min_combination(target, vec);

  vector<int> result = sol.get_combination(target, vec);

#ifdef DEBUG_PRINT
  for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
  }
#endif

  return 0;
}