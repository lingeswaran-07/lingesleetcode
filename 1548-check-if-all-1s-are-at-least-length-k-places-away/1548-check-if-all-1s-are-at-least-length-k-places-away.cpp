class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        int prev=0;
        if(nums[0]==1){
            prev=0;
        for(int i=1;i<n;i++){
            if(nums[i]==1){
                int cnt=i-prev-1;
                if(cnt<k){
                    return false;
                }
                prev=i;
            }
            
        }
        }
        else{
            int j=0;
            for(int i=0;i<n;i++){
                if(nums[i]==1){
                    j=i;
                    break;
                }
            }
            prev=j;
            for(int i=j+1;i<n;i++){
                if(nums[i]==1){
                    int cnt=i-prev-1;
                 if(cnt<k){
                    return false;
                }
                prev=i;
                }
            }
        }
        return true;
    }
};