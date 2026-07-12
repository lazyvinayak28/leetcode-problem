class Solution {
public:
    void fnd(string &v,int i,vector<string> &st){
        if(i==v.size()){st.push_back(v);return;}
         v[i]='0';
         fnd(v,i+1,st);
         v[i]='1';
         fnd(v,i+1,st);
    }
    string findDifferentBinaryString(vector<string>& nums) {
        vector<string> st;
        int n=nums.size();
        string ans;
        string v(n,'0');
        fnd(v,0,st);
        int i=0;
        int j=0;
        while(i<st.size()){
            j=0;
            while(j<n){
                if(st[i]==nums[j]){i++;j=0;}
                else{j++;}
            }
                if(j==n){return st[i];}
        }
    return ans;
    }
};