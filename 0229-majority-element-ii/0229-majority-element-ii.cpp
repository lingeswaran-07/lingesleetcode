class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ls;
        map<int,int>mp;
        int mini=(nums.size()/3) + 1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]== mini){
                ls.push_back(nums[i]);
            }
        }
        return ls;
    }
};