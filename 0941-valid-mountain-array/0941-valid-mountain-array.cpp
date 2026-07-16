class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){return false;}
        int idx=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[idx]){
                idx=i;
            }
            else if(arr[i]==arr[idx]){return false;}
        }
        if(idx==0 || idx==n-1){return false;}
        for(int i=0;i<idx-1;i++){
            if(arr[i]>=arr[i+1]){return false;}
        }
        for(int i=idx;i<n-1;i++){
            if(arr[i]<=arr[i+1]){return false;}
        }
        return true;
    }
};