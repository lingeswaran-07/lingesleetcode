class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            int cnt=__builtin_popcount(i);
            cout<<cnt<<endl;
            if(cnt==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};