class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
             mp[nums[i]]++;
        }
        vector<int>vec;
        for(int i=mini;i<=maxi;i++){
            if(mp.find(i)==mp.end()){
                vec.push_back(i);
            }
           
        }
        return vec;
         
    }
};