class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int maxi=nums[0];
        int sum=nums[0];
        int last=nums[0];
        if(n==1){
            return nums[0]+1;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==last+1){
                last=nums[i];
                sum+=nums[i];
            }
            else{
                while(find(nums.begin(), nums.end(), maxi) != nums.end()){
                    maxi+=1;
                }
                break;
            }
            maxi=max(maxi,sum);
        }
       
        return maxi;
    }
};