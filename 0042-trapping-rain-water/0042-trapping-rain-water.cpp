class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int lmax=0;
        int rmax=0;
        int tot=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(lmax>height[l]){
                    tot+=(lmax-height[l]);
                    
                }
                else{
                    lmax=max(lmax,height[l]);
                }
                l++;
            }
            else{
                if(rmax>height[r]){
                     tot+=(rmax-height[r]);
                    
                }
                else{
                     rmax=max(rmax,height[r]);
                }
                 r--;
            }
        }
        return tot;
    }
};