class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> freq(100001,0);
        int i=0,j=0;long long sum=0;long long maxsum=INT_MIN;
        int count=0;
        while(j<n){
            if(freq[nums[j]]==0){
                sum+=nums[j];
                freq[nums[j]]+=1;
                count++;
                j++;
            }
            else{
                while(freq[nums[j]]!=0){freq[nums[i]]-=1;sum-=nums[i];count--;i++;}
            }
            if(count==k){
                if(sum>maxsum){maxsum=sum;}
                sum-=nums[i];
                count--;
                freq[nums[i]]-=1;
                i++;
                // j++;
            }
        }
        if(maxsum==INT_MIN){return 0;}
        return maxsum;
    }
};