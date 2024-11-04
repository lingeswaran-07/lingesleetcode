class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size()/2;
        vector<double>vec;
      
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        while(l<r){
          double mini=nums[l];
          double maxi=nums[r];
          double res=(mini+maxi)/2;
          vec.push_back(res);
          l++;
          r--;
            
        }
        
        double x= *min_element(vec.begin(),vec.end());
        return x;


    }
};