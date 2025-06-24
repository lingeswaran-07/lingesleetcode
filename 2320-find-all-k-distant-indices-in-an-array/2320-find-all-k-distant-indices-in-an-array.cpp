class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n=nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int l=max(0,i-k);
                int r=min(n-1,i+k);
                for(int j=l;j<=r;j++){
                    res.push_back(j);
                }
            }
        }

        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
        
    }
};