class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int mini=INT_MAX;
        int n=tasks.size();
        int m=tasks[0].size();
        for(int i=0;i<n;i++){
            int sum=tasks[i][0]+tasks[i][1];
            if(sum<mini){
                mini=sum;
            }
        }
        return mini;
    }

};