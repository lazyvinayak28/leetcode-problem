class Solution {
public:
    int reverse(int x) {
    int dig;
    long long val=0;
    
        while(x!=0){
        dig=x%10;
        x=x/10;   
        val=val*10+dig;
    }
    if (val < INT_MIN || val > INT_MAX) {
            return 0;}
    return val;}  
};