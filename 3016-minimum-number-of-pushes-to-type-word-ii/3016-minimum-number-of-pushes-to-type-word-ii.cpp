class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();int ans=0;
        vector<int> freq(26,0);
        for(int i=0;i<n;i++){
            char ch=word[i];
            int x=int(ch);
            freq[x-97]=freq[x-97]+1;
        }
        sort(freq.begin(),freq.end());
        for(int i=25;i>=0;i--){
            if(i<=25 && i>=18){ans=ans+1*freq[i];}
            else if(i<=17 && i>=10){ans=ans+2*freq[i];}
            else if( i<=9 &&i>=2 ){ans=ans+3*freq[i];}
            else {ans=ans+4*freq[i];}
        }
        return ans;
    }
};