class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int l=0,h=m-1;
        int left=0,right=0;
        int max=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            for(int i=1;i<n;i++){
                if(mat[i][mid]>mat[max][mid]){max=i;}
            }
            if(mid-1>=0){left=mat[max][mid-1];}
            else{left=-1;}
            if(mid+1<=m-1){right=mat[max][mid+1];}
            else{right=-1;}
            if(mat[max][mid]>left && mat[max][mid]>right ){
                return {max,mid};
            }
            else if(mat[max][mid]<left ){h=mid-1;}
            else{l=mid+1;}
        }
        return {-1,-1};
    }
};