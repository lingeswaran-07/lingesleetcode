class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int>st;
        int ans=0;
        for(int num:nums){
            st.insert(num);
        }
        for(int i=0;i<n;i++){
            set<int>stt;
            for(int j=i;j<n;j++){
                    stt.insert(nums[j]);
                     if(stt.size()==st.size()){
                         ans++;
                     }
            }
           
        }
        return ans;
    }
};