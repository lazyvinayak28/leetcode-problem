class Solution {
public:
    void create_combo(vector<string> &val,vector<string> &ans,string digits,int v,string temp){
        if(v==digits.size()){ans.push_back(temp);return;}
        int a=digits[v]-'0';
        for(int i=0;i<val[a-2].size();i++){
        string s;
        temp=temp+val[a-2][i];
        create_combo(val,ans,digits,v+1,temp);
        temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> val={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        ;vector<string>ans;
        create_combo(val,ans,digits,0,"");
        return ans;
    }
};