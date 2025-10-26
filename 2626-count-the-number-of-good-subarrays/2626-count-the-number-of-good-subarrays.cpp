class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
        int n=nums.size();
        long long paircnt=0;
        long long goodsub=0;
        unordered_map<int,int>fre;
        int l=0;
        for(int r=0;r<n;r++){
            paircnt+=fre[nums[r]];
            fre[nums[r]]++;
            while(paircnt>=k){
                goodsub+=n-r;
                fre[nums[l]]--;
                paircnt-=fre[nums[l]];
                l++;
            }
        }
        return goodsub;
    }
};