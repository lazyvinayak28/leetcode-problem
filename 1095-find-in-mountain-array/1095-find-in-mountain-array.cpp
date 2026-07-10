/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak;
        int val=-1;
        int l=0,h=mountainArr.length()-1;
        while(l<=h){
            int mid=(l+h)/2;
            int midval=mountainArr.get(mid);
            if(mid==mountainArr.length()-1 &&  midval>mountainArr.get(mid-1)){peak=mid;break;}
            else if(mid==mountainArr.length()-1 &&  midval<mountainArr.get(mid-1)){h=mid-1;}
            else if(mid==0 &&  midval>mountainArr.get(mid+1)){peak=mid;break;}
             else if(mid==0 &&  midval<mountainArr.get(mid+1)){l=mid+1;}
            else if( midval>mountainArr.get(mid+1) &&  midval>mountainArr.get(mid-1)){peak=mid;break;}
            else if( midval>mountainArr.get(mid-1)){l=mid+1;}
            else{h=mid-1;}
        }
        l=0,h=peak;
        while(l<=h){
            int mid=(l+h)/2;
            if(mountainArr.get(mid)==target){return mid;}
            else if(mountainArr.get(mid)>target){h=mid-1;}
            else{l=mid+1;}
        }
        l=peak+1,h=mountainArr.length()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(mountainArr.get(mid)==target){return mid;}
            else if(mountainArr.get(mid)<target){h=mid-1;}
            else{l=mid+1;}
        }
        return val;

    }
};