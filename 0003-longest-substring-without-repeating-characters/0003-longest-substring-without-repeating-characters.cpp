class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, 0);int n=s.size();
        int  i=0,j=0;int maxlen=0;
        while(j<n){
            if(freq[int(s[j])]==1){while(freq[int(s[j])]!=0){freq[int(s[i])]-=1;i++;}
            freq[int(s[j])]+=1;}
            else{freq[int(s[j])]+=1;}
            int len=j-i+1;
            if(len>maxlen){maxlen=len;}
            j++;
        }
        return maxlen;
    }
};