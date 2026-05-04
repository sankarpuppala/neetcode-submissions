#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());

        int longest = 1;
        int current = 1;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i+1] == nums[i]) {
                continue;  // skip duplicates
            }
            else if (nums[i+1] == nums[i] + 1) {
                current++;
            }
            else {
                longest = max(longest, current);
                current = 1;
            }
        }

        return max(longest, current);
    }
};

