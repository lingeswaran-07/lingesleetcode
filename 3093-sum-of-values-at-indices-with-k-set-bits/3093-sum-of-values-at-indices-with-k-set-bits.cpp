class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            // int cnt=__builtin_popcount(i);
            int a=i;
            int c=0;
            while(a!=0){
                if((a&1)==1) c++;
                 a>>=1;
            }
            if(c==k){
                sum+=nums[i];
            }
        }
        return sum;
    }
};