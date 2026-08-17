class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());vector<int> ans;
        int j=0;int n=nums.size();int m=queries.size();
        while(j<m){
            int sum=0;int x=0;int i=0;
        while(sum<=queries[j] && i<n){
            sum+=nums[i];
            x=i;
            i++;
            if(i==n && queries[j]>=sum){x=i;}
        }
        ans.push_back(x);
        j++;
        }
        return ans;
    }
};