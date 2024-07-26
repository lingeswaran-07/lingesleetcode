class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
               int temp=(nums[i]-1)*(nums[j]-1);
               vec.push_back(temp);
            }
        }
       
          return *std::max_element(vec.begin(), vec.end());
    
    }
};