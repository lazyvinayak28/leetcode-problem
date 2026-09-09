class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        return accumulate(arr.begin() + 1, arr.end(), pair{arr[0], 0}, [k](auto p, int x) { return p.second == k ? p : (p.first > x ? pair{p.first, p.second + 1} : pair{x, 1}); }).first;
    }
};