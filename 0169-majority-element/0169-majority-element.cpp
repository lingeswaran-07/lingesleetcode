class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        int res=0;
        int max=0;
        for(auto it:mp){
            if(it.second>max){
                max=it.second;
                res=it.first;
                
            }
        }
        return res;
    }
};