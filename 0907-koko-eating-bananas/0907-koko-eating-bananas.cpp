class Solution {
public:

    long long findhour(vector<int>&piles,int m){
        long long t=0;
        int a=piles.size();
        for(int i=0;i<a;i++){
           t += (piles[i] + (long long)m - 1) / m; 
        }
        return t;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int l=1;
        int hi=*max_element(piles.begin(),piles.end());
        while(l<=hi){
            int m=l+(hi-l)/2;
           long long hour=findhour(piles,m);
            if(hour<=h){
                hi=m-1;
            }
            else{
                l=m+1;
            }
        }
   return l;
        
    }
};