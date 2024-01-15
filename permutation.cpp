#include "permutation.h"

void Permutation::permute(vector<int> &nums) {

  unordered_set<int> checker;
  vector<int> n_list;
  vector<vector<int>> ans;
  get_ans(nums, checker, n_list, ans);

  /* print the list of ans */
  print_ans(ans);
}

void Permutation::get_ans(vector<int> &nums, unordered_set<int> &check,
                          vector<int> &n_list, vector<vector<int>> &ans) {
  if (nums.size() == n_list.size()) {
    ans.push_back(n_list);
    return;
  }

  for (int i = 0; i < nums.size(); i++) {
    if (check.find(nums[i]) == check.end()) {
      check.insert(nums[i]);
      n_list.push_back(nums[i]);
      get_ans(nums, check, n_list, ans);
      check.erase(nums[i]);
      n_list.pop_back();
    }
  }
}

void Permutation::print_ans(vector<vector<int>> &ans) {
  for (auto a : ans) {
    for (auto l : a) {
      cout << l << "\t";
    }
    cout << "\n";
  }

  return;
}
