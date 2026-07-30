class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int s=digits.size();
            int count=0;
            int m=0;
        if(digits[s-1]!=9){
            digits[s-1]=digits[s-1]+1;
            return digits;
        }
        // else if(digits[0]==9 && digits[s-1]==9){
        //     digits.insert(digits.begin()+0,1);
        //     for(int i=1;i<=s;i++){
        //         digits[i]=0;
        //     }
        // }
        else{
            int count=0;
            int temp=s-1;
            while(digits[temp]==9){
                temp-=1;
                count+=1;
                if(temp<0){
                    break;
                }
            }
            if(count!=s){
            m=s-1-count;
            digits[m]+=1;
        for(int i=1;i<=count;i++){
            digits[m+i]=0;
            }}
            else{
                digits.insert(digits.begin()+0,1);
            for(int i=1;i<=s;i++){
                digits[i]=0;
            }
            }
        }
        


        return digits;
    }
};