#pragma once
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Permutation {
public:
  /* Given a list of integers return the all the
    permutations of the integers as list */
  void permute(vector<int> &nums);

private:
  void get_ans(vector<int> &nums, unordered_set<int> &check,
               vector<int> &n_list, vector<vector<int>> &ans);

  void print_ans(vector<vector<int>> &ans);
};