class Solution {
public:
    int appendCharacters(string s, string t) {
        int c=0;
        int n=t.size();
        int a=0;
        for(int i=0;i<n;i++){
            if(a>=s.size()){return n-c;}
            else if(s[a]!=t[i]  && a<s.size()){
            while(s[a]!=t[i]  && a<s.size()){
                a++;
            }i=i-1;}
            else{a++;c++;}
        }
        return n-c;
    }
};