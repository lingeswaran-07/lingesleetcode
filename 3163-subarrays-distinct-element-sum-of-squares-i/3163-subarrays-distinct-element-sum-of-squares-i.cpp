class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            unordered_map<int,int>mp;
            int distinct=0;
            for(int j=i;j<nums.size();j++){
                if(mp[nums[j]]==0){
                    distinct++;
                }
                mp[nums[j]]++;
                sum+=(distinct*distinct);
            }

        }
        return sum;
    }
};