class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();int maxlen=0;
        int sum=0;vector<int> freq(n,0);
        int i=0,j=0; 
        while(j<n){
            if(sum<2){
                if(freq[fruits[j]]==0){freq[fruits[j]]+=1;sum+=1;} 
                else if(freq[fruits[j]]>0){freq[fruits[j]]+=1;}
           }
           else if(sum==2){
            if(freq[fruits[j]]>0){freq[fruits[j]]+=1;}
            else if (freq[fruits[j]]==0){
                while(sum==2 && i<n){
                    if(freq[fruits[i]]==1){freq[fruits[i]]-=1;i++;sum--;}
                    else{freq[fruits[i]]-=1;i++;}
                }
                sum++;
                freq[fruits[j]]+=1;
            }
           }
           int len=j-i+1;
           if(len>maxlen){maxlen=len;}
           j++;
        }
        return maxlen;
    }
};