// void check(vector<int>* nums1 ,int &p, int &n){
//         for(int i=1;i<n;i++){
//             if(nums1[i]%2!=p){ans=false;break;}
//         }
// }
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
    int m=INT_MAX;
    int n=nums1.size();
    bool odd=false;
    for(int i=0;i<n;i++){
        if(nums1[i]%2==1){
            m=min(m,nums1[i]);
            odd=true;
        }
    }
    if(odd==false){return true;}
    //a=n,b=INT_MAX;
    for(int i=0;i<n;i++){
        if(nums1[i]%2==0 && nums1[i]<m){return false;}
    }
    return true;
    }
};