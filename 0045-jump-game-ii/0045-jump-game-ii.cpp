class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int far=0;
        int cnt=0;
        int cur=0;
        for(int i=0;i<n-1;i++){
            far=max(far,i+nums[i]);
            if(cur==i){
                cur=far;
                cnt++;
            }
        }

        return cnt;

    }
};