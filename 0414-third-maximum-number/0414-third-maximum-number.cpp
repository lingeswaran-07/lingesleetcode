class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long flar=LONG_MIN;
        long slar=LONG_MIN;
        long tlar=LONG_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==flar || nums[i]==slar || nums[i]==tlar) continue;
            if(nums[i]>flar){
                tlar=slar;
                slar=flar;
                flar=nums[i];
            }
           else if(nums[i]>slar){
                tlar=slar;
                slar=nums[i];

            }
            else  if(nums[i]>tlar){
                tlar=nums[i];
            }
        }
        return tlar==LONG_MIN ? flar:tlar;
    }
};