class Solution {
public:

    int num(vector<int>& weights, int day){
        int d=1,load=0;
        for(int i=0;i<weights.size();i++){
        if(load+weights[i]>day){
            d=d+1;
            load=weights[i];
        }
        else{
            load+=weights[i];
        }
        }
        return d;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        
        int cap=*max_element(weights.begin(),weights.end());
        int sum=0;
          for(int i=0;i<weights.size();i++){
            sum+=weights[i];
          }
         while(cap<=sum){
            int mid=cap+(sum-cap)/2;
            int nday=num(weights,mid);
            if(nday<=days){
                sum=mid-1;
            }
            else {
                cap=mid+1;

            }         
        }
        return cap;
    }
};