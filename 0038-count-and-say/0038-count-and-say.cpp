class Solution {
public:
    void csay(string n,int time,int k, string &ans){
        if(time==k){ans=ans+n;return;}
        string s=n;
        string temp;
        for(int i=0;i<s.size();i++){
            int c=1;
            while(i<s.size()-1 && s[i]==s[i+1]){c++;i++;}
            if(i==s.size()-1){
            temp=temp+to_string(c)+s[i];}
            else{
            temp=temp+to_string(c)+s[i];}
        }
    csay(temp,time,k+1,ans);
    }
    string countAndSay(int n) {
        string ans;
        csay("1",n,1,ans);
        return ans;
    }
};