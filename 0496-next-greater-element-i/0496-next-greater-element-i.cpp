class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
       for(int i=0;i<nums1.size();i++){
        bool flag=false;
        int ans=-1;
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                int n=nums1[i];
               for(int k=j;k<nums2.size();k++){
                if(nums2[k]>n){
                   ans=nums2[k];
                    break;
                }
               }
                flag=true;
                break;
             
            }
           

        }
            vec.push_back(ans);
        
       }
       return vec;
    }
};