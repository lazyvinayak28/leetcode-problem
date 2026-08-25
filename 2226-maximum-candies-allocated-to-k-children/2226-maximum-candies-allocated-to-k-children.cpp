class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long sum = 0;
        for (int i = 0; i < candies.size(); i++) {
            sum += candies[i];
        }
        long long l = 1;
        long long r = sum / k;
        long long ans = 0;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long cnt = 0;
            for (int i = 0; i < candies.size(); i++) {
                cnt += candies[i] / mid;
            }
            if (cnt>=k) {
                ans = mid;
                l = mid + 1;}
            else {
                r = mid - 1;
            }}
        return ans;
    }
};