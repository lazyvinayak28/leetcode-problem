class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0,j=k-1;
        int sum=0;
        int c=0;
        for(int p=i;p<=j;p++){
            sum+=arr[p];
        }
        int avg=sum/k;
        if(avg>=threshold){c++;}
        while(j<n-1){
            sum=sum-arr[i]+arr[j+1];
            int tavg=sum/k;
            if(tavg>=threshold){c++;}
            i++;j++;
        }
        return c;
    }
};