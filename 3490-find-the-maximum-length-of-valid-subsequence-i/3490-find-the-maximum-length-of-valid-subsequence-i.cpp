class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int ecnt=0;
        int ocnt=0;
        bool flag=nums[0]%2==1;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                if(flag){
                    flag=!flag;
                    cnt++;
                }
                ocnt++;
            }
            else{
                  if(!flag){
                    flag=!flag;
                    cnt++;
                }
                ecnt++;

            }

        }
        return max({cnt,ocnt,ecnt});

        
    }
};