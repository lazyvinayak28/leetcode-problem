class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> freq(26,0);int n=s.size();
        vector<int> checkfreq(26,0);vector<int> ans;
        int k=p.size();
        int i=0,j=k-1;
        if(k > n) return {};
        for(int x=i;x<=j;x++){
            freq[int(s[x])-97]+=1;
            checkfreq[int(p[x])-97]+=1;
        }
            if(freq==checkfreq){ans.push_back(i);}
        while(j<n-1){
            freq[int(s[i])-97]-=1;
            freq[int(s[j+1])-97]+=1;
            i++;j++;
            if(freq==checkfreq){ans.push_back(i);}
        }
        return ans;
    }
}; 