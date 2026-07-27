class Solution {
public:
    void check(string temp, int co,int cc,int n,vector<string> &ans){
        if(co==cc && cc==n){ans.push_back(temp);return;}
        if(cc>co || co>n){return;}
        check(temp+'(',co+1,cc,n,ans);
        check(temp+')',co,cc+1,n,ans);

    }
    vector<string> generateParenthesis(int n) {
        string temp;
        temp=temp+'(';
        vector<string>ans;
        int co=1,cc=0;
        check(temp,co,cc,n,ans);
        return ans;

    }
};