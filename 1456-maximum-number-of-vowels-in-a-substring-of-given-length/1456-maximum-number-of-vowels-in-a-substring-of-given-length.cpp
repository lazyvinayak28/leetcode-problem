class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        vector<int> freq(n,0);
        int p=0;
        char a='a',e='e',m='i',o='o',u='u';
        while(p<n){
            if(s[p]==a || s[p]==e || s[p]==m || s[p]==o || s[p]==u){
                freq[p]=1;
            }
            p++;
        }
        int i=0,j=k-1;int csum=0,msum=0;p=i;
        while(p<=j){csum+=freq[p];p++;}
        msum=csum;
        while(j<n-1){
            csum=csum-freq[i]+freq[j+1];
            if(csum>msum){msum=csum;}
            i++;j++;
        }
    return msum;
    }
};