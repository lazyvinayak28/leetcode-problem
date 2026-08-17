class Solution {
public:
    int minSwaps(string s) {
        int i = 0, j = s.size() - 1;
        int count = 0;
        int co = 0, cc = 0;
        while (i < j) {
            if (s[i] == '[') {
                co++;
                i++;
            } else if (co > 0) {
                co--;
                i++;}if (s[j] == ']') {
                cc++;
                j--;
            } else if (cc >0){
                cc--;
                j--;}

            if (i < j && s[i] == ']' && co == 0 && s[j] == '[' && cc == 0) {
                swap(s[i], s[j]);
                count++;
                co = 1;
                cc = 1;
                i++;
                j--;}
        }

        return count;
    }
};