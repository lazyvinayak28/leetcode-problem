class Solution {
public:
    int maxSatisfaction(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=0;int n=nums.size();
        int temp=1;int ans=0;int maxans=0;
        while(j<n){
            ans+=temp*nums[j];
            j++;
            temp++;
            if(ans>maxans){maxans=ans;}
            if(j==n && nums[i]<0){i++;j=i;ans=0;temp=1; }
        }
        return maxans;
    }
};