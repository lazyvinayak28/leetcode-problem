class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        while(stones.size()>1){
        sort(stones.begin(),stones.end());
            int x=stones[stones.size()-2];
            int y=stones[stones.size()-1];
            if(x==y && stones.size()==2){return 0;}
            if(x==y){
                stones.pop_back();
                stones.pop_back();
            }
            else if(x!=y){
                int ans=y-x;
                stones.pop_back();
                stones.pop_back();
                stones.push_back(ans);
                
            }
        }
        return stones[0];
    }
};