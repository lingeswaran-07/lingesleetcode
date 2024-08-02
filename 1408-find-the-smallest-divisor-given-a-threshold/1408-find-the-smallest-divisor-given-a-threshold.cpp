class Solution {
public:
      int find_total(vector<int>& nums, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=ceil((double)nums[i]/(double)mid);
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1;
        while(low<=high) {
            int mid=low+(high-low)/2;
            if(find_total(nums,mid)<=threshold) {
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return low;
    }
};