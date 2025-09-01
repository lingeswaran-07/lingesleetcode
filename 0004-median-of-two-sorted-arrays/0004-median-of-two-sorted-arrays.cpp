class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
         int n=nums1.size();
         int m=nums2.size();
         vector<int>vec;
         int i=0;
         int j=0;
         while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                vec.push_back(nums1[i]);
                i++;
            }
            else{
                vec.push_back(nums2[j]);
                j++;
            }
         }

         while(i<n){
              vec.push_back(nums1[i]);
                i++;
         }
         
         while(j<m){
            vec.push_back(nums2[j]);
            j++;
         }

         int tot=n+m;
         if(tot%2==1){
            return vec[tot/2];
         }
         else{
            return (vec[tot/2-1]+vec[tot/2])/2.0;
         }
        
    }
};