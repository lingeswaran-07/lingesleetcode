class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int>st;
       for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
       }
       nums.assign(st.begin(),st.end());
       return nums.size();
    }
};