class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>l1;
        vector<int>l2;
         vector<int>l3;
        for(int i=0;i<n;i++){
                if(nums[i]<pivot){
                    l1.push_back(nums[i]);
                }
                else if(nums[i]>pivot){
                    l2.push_back(nums[i]);
                }
                else{
                    l3.push_back(nums[i]);
                }
        }
        for(int i=0;i<l3.size();i++){
            l1.push_back(l3[i]);
        }
          for(int i=0;i<l2.size();i++){
            l1.push_back(l2[i]);
        }
        return l1;
    }
};