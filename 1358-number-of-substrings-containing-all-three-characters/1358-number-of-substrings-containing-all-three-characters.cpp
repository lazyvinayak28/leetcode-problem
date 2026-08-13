class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int i=0,j=0;int count=0;
        int a=0,b=0,c=0;
        while(i<n && j<n){
            if(s[j]=='a'){a++;}
            else if(s[j]=='b'){b++;}
            else if(s[j]=='c'){c++;}
            while(min({a,b,c})>=1){count+=n-j;if(s[i]=='a'){a--;}else if(s[i]=='b'){b--;}else{c--;}  
            i++;}
            j++;
        }
        return count;
    }
};