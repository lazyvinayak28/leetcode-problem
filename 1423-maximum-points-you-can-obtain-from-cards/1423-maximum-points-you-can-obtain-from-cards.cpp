class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size();
        int i=n-k,j=i+k-1;
        int sum=0,maxsum=0;
        for(int p=i;p<=j;p++){
            sum+=nums[p];
        }
        maxsum=sum;
        while(i<n){
            int l=j%n;
            sum=sum+nums[((l+1)%n)]-nums[i];
            if(sum>maxsum){maxsum=sum;}
            j++;i++;
        }
        return maxsum;
    }
};