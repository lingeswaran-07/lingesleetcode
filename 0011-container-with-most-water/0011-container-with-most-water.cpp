class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int maxi=0;
        int ans=0;
        int l=0;
        int r=n-1;
        while(l<r){
            int width=min(height[l],height[r]);
            int len=(r-l);
            maxi=max(maxi,width*len);
            if(height[l]<=height[r]){
                l++;
            }
            else{
                r--;
            }
           
        }
        return maxi;
    }
};