class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.size();
        vector<int> freq(n);
        for(int p=0;p<n;p++){
            if(s[p]=='a' || s[p]=='e' || s[p]=='i' || s[p]=='o' || s[p]=='u'){
                freq[p]=1;
            }
            else{freq[p]=0;}
        }
        int i=0,j=k-1;int csum=0,msum=0;
        for(int p=i;p<=j;p++){csum+=freq[p];}
        msum=csum;
        while(j<n-1){
            csum=csum-freq[i]+freq[j+1];
            if(csum>msum){msum=csum;}
            i++;j++;
        }
    return msum;
    }
};