class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pro=0;
        int cost=prices[0];
        for(int i=1;i<prices.size();i++){
            pro=max(pro,prices[i]-cost);
            cost=min(cost,prices[i]);
        }
        return pro;
    }
};