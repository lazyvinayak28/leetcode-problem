class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int t=k;
        int i=0,x=1;
        while(k!=0){
            if(i>=arr.size()){v.push_back(x);x++;k--;}
            else if(arr[i]==x){i++;x++;}
            else if(arr[i]!=x){v.push_back(x);x++;k--;}
        }
        return v[t-1];
    }
};