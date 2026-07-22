class Solution {
public:
    void rev(int x,long long &ans){
        if(x==0){return ;}
        int dig=x%10;
        ans=ans*10+dig;
        rev( x/10,ans);

    }
    int reverse(int x) {
        long long ans=0;

        rev(x,ans);
        if(ans>INT_MAX || ans<INT_MIN){return 0;}
        return ans;
    }
};