class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int l=0;
        int h=nums.size();
        int mid=(h+l)/2;
        vector<int>arr1(nums.begin(),nums.begin()+mid);
        vector<int>arr2(nums.begin()+mid,nums.end());

        int n=arr1.size();
        int m=arr2.size();
        int i=0,j=0;
        int pair=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                pair++;
                i++;
                j++;
            }
            else{
              
            j++;
            }
        }
        return nums.size()-2*pair;
       
        
    }
};