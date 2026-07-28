class Solution {
public:
    void check(int n,int k,vector<string> &v){
        if(n==1){return;}
        if(k!=1 && k%2==0 ){v.push_back("left");check(n-1,k/2,v);}
        else{v.push_back("right");check(n-1,(k+1)/2,v);}
    }
    int kthGrammar(int n, int k) {
        vector<string> v;
        check(n,k,v);
        for(int i=0;i<v.size();i++){
            if(v[i]=="left"){v[i]="right";}
            else{v[i]="left";}

        }
        int l=0,r=0;
        for(int i=0;i<v.size();i++){
            if(v[i]=="left"){l++;}
            else{r++;}
        }
        int cans=0;
        if(r%2==0 && l%2!=0){ cans= 0;}
        else if(r%2!=0 && l%2==0){cans= 1;}
        else if(r%2!=0 && l%2!=0){cans=1;}
        return cans;
    }
};