class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq(26,0);
        vector<int> checkfreq(26,0);
        int n=s2.size();
        int k=s1.size();
        int i=0,j=k-1;
        if(k > n) return false;
        for(int x=i;x<=j;x++){
            freq[int(s2[x])-97]+=1;
            checkfreq[int(s1[x])-97]+=1;
        }
            if(freq==checkfreq){return true;}
        while(j<n-1){
            freq[int(s2[i])-97]-=1;
            freq[int(s2[j+1])-97]+=1;
            i++;j++;
            if(freq==checkfreq){return true;}
        }
        return false;
    }
};