class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=accumulate(gas.begin(),gas.end(),0);
        int sum2=accumulate(cost.begin(),cost.end(),0);
        if(sum1<sum2) return -1;
        int cur=0;
        int start=0;
        for(int i=0;i<gas.size();i++){
            cur+=(gas[i]-cost[i]);
            if(cur<0){
                start=i+1;
                cur=0;
            }

        }
        return start;
    }
};