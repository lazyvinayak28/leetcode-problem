class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int> p(n);
        vector<int> a(n);
        int max=-1;
        for(int i=0;i<n;i++){
            p[i]=max;
            if(height[i]>max){max=height[i];}

        }
        max=-1;
        for(int i=n-1;i>=0;i--){
            a[i]=max;
            if(height[i]>max){max=height[i];}

        }
        for(int i=1;i<n-1;i++){
            if(min(a[i],p[i])>height[i]){
                ans=ans+(min(a[i],p[i])-height[i]);
            }
        }
        return ans;
    }
};