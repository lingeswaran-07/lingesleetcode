class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        // int n=nums.size();
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(2*nums[i]<=nums[j]){
        //             cnt+=2;
        //         }
        //     }
        // }
        // return cnt;
      sort(nums.begin(),nums.end());
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
            if(2*arr1[i]<=arr2[j]){
                pair++;
                i++;
                j++;
            }
            else{
            j++;
            }
        }
        return 2*pair;
       
    }
};