class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int count=0;
        for(int i=1;i<=n;i++){
            if(i<=8){count+=1;}
            else if(i>8 && i<=16){count+=2;}
            else if( i>16 && i<=24){count+=3;}
            else if(i>24){count+=4;}
        }
        return count;
    }
};