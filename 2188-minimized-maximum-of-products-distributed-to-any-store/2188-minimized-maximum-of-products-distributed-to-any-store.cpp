class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
        int l=1;
        int h=*max_element(quantities.begin(),quantities.end());
        int mini=INT_MAX;
        int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            int cnt=0;
            for(int i=0;i<quantities.size();i++){
                cnt=cnt+ceil((double) quantities[i]/mid);
            }
            if(cnt<=n){
                mini=min(mini,mid);
                h=mid-1;

            }
            else{
                l=mid+1;
            }
            

        }
        return mini;
        
    }
};