class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int totcnt=0;
        for(int i=0;i<n;i++){
            int a=nums[i];
            int cnt=0;
            while(a!=0){
                  cnt++;
                  a/=10;
            }
            if(cnt%2==0) totcnt++;
        }
        return totcnt;
    }
};