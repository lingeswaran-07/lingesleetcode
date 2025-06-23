class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int tot=accumulate(arr.begin(),arr.end(),0);
        if(tot%3!=0) return false;

        int tar=tot/3;
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==tar){
                cnt++;
                sum=0;

            }
        }
        
        return cnt>=3;
    }
};