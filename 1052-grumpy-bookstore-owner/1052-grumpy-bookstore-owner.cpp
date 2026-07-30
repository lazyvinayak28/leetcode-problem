class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum=0;
        int i=0,j=minutes-1;
        long long sumcustomer=0,sumcstm=0;
        vector<int> cstm;
        for(int p=0;p<customers.size();p++){
            if(grumpy[p]!=1){
                cstm.push_back(customers[p]);
                sum+=cstm[p];
                // sumcstm+=customers[i];
            }
            else{ cstm.push_back(0);}
            // sumcustomer+=customers[i];
        }
        for(int p=0;p<minutes;p++){
            if(grumpy[p]!=1){
                sumcstm+=customers[p];
            }
            sumcustomer+=customers[p];

        }
        int difans=sumcustomer-sumcstm;

        while(j<customers.size()-1){
            sumcustomer=sumcustomer+customers[j+1]-customers[i];
            sumcstm=sumcstm+cstm[j+1]-cstm[i];
            int dif=sumcustomer-sumcstm;
            if(dif>difans){difans=dif;}
            i++;j++;
        }
        return sum+difans;
    }
};