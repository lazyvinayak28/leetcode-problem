class Solution {
public:
    string find_permutationElement(string str,int k,string ans){
        int n=str.size();
           int fact=1;
           if(n==1){ans+=str;return ans;}
           for(int i=2;i<n;i++){
            fact*=i;           }
            int idx=k/fact;
            if(k%fact==0){idx--;}
            char ch=str[idx];
            string l=str.substr(0,idx);
            string r=str.substr(idx+1);
            int q=1;
            if(k%fact==0){q=fact;}
            else{q=k%fact;}
            return find_permutationElement(l+r,q,ans+ch);
    }
    string getPermutation(int n, int k) { 
        string str="";
        string ans;
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        return find_permutationElement(str,k,ans); 
    }
};