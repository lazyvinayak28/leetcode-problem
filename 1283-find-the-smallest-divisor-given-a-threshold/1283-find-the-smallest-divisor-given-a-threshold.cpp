class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        long long f=-1;
        long long max=0;
        for(int i=0;i<n;i++){
            if(nums[i]>max){max=nums[i];}
        }
        long long l=1,h=max;
        while(l<=h){
            long long mid=l+(h-l)/2;
            long long ans=0;
            for(int i=0;i<n;i++){
                long long temp = ((long long)nums[i] + mid - 1) / mid;
                ans+=temp;
            }
            if(ans<=threshold){
                f=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return f;
        
    }
};