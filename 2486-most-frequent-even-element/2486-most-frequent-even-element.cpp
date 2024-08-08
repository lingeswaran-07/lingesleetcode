class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int ,int>mp;
        for(int num:nums){
            if(num%2==0){
            mp[num]++;}
        }
        int l=INT_MIN;
        int ind =-1;
        vector<int>vec;
         if(mp.size()==0) return -1;
        for(auto it:mp){
           
            if(it.second>l || (it.second==l && ind>it.first)){
                l=it.second;
                ind =it.first;
            }
        }
     return ind;
    }
};