class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
         int ans=numBottles;
         int res=ans;
         while(ans>=numExchange){
            int a=ans%numExchange;
            int b=ans/numExchange;
            ans=a+b;
            res+=b;
         }
         return res;
    }
};