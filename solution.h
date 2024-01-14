#pragma once
#include <algorithm>
#include <iostream>
#include <limits.h>
#include <vector>

// #define DEBUG 1
#define DEBUG_PRINT 1
using namespace std;

class Solution {
public:
  void combination_get(int index, int target, vector<int> &arr, vector<int> &ds,
                       vector<vector<int>> &ans);

  void combination(int target, vector<int> &vec);

  void min_combination(int target, vector<int> &vec);

  int solution(int target, vector<int> &vec);

  vector<int> get_combination(int target, vector<int> &denominations);
};