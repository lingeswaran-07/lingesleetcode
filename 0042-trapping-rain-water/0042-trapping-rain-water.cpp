class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int l=0;
        int h=n-1;
        int lmax=0;
        int rmax=0;
        int tot=0;
        while(l<h){
            if(height[l]<=height[h]){
                if(lmax>height[l]){
                    tot+=(lmax-height[l]);
                }
                lmax=max(lmax,height[l]);
                l++;
            }
            else{
                if(rmax>height[h]){
                    tot+=(rmax-height[h]);

                }
                rmax=max(rmax,height[h]);
                h--;
            }
        }
        return tot;
    }
};