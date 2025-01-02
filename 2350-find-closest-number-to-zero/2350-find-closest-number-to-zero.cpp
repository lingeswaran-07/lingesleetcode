class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int val=nums[0];
        for(int i=1;i<nums.size();i++){
            if((abs(nums[i])<abs(val)) || ((abs(nums[i])==abs(val)) && (nums[i]>val))){
                val=nums[i];
            }
        }
        return val;
    }
};