class Solution {
public:
    string customSortString(string order, string s) {
        int arr[26] = {0};
        string ans = "";

        for(char ch : s) {
            arr[ch - 'a']++;
        }

        for(char ch : order) {
            while(arr[ch - 'a'] > 0) {
                ans += ch;
                arr[ch - 'a']--;
            }}
        for(int i = 0; i < 26; i++) {
            while(arr[i] > 0) {
                ans += char(i + 'a');
                arr[i]--;
            }}
        return ans;
    }
};