#include <vector>
#include <algorithm>

class Solution {
public:
    int firstStableIndex(std::vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return -1;

        std::vector<int> min_val(n);
        int minimum = nums[n - 1];
        for (int i = n - 1; i >= 0; --i) {
            minimum = std::min(minimum, nums[i]);
            min_val[i] = minimum;
        }

        int max_val = nums[0];
        for (int i = 0; i < n; ++i) {
            max_val = std::max(max_val, nums[i]);
            int stability = max_val - min_val[i];
            if (stability <= k) {
                return i;
            }
        }

        return -1;
    }
};