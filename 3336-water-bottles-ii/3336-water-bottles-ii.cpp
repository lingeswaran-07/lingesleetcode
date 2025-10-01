class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
         int ans=numBottles;
         int res=ans;
         while(ans>=numExchange){
            res++;
            ans-=numExchange;
            numExchange++;
            ans++;
         }
         return res;
    }
};