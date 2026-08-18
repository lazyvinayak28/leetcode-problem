class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int i=n-k,j=i+k-1;int sum=0;int maxsum=INT_MIN;
        for(int c=i;c<=j;c++){
            sum+=nums[c];
        }
            if(sum>maxsum){maxsum=sum;}
        while(j<n+k-1){
           
            sum+=nums[(j+1)%n];
            sum-=nums[i%n];
            if(sum>maxsum){maxsum=sum;}
            i++;j++;
            // if(sum>maxsum){maxsum=sum;}
        }
        return maxsum;
        }
};