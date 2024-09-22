class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
            vec.push_back({score[i],i});
        }

        sort(vec.begin(),vec.end(),greater<pair<int,int>>());
     
        vector<string>ans(n);
           for (int i = 0; i < n; ++i) {
            if (i == 0) {
                ans[vec[i].second] = "Gold Medal";
            } else if (i == 1) {
                ans[vec[i].second] = "Silver Medal";
            } else if (i == 2) {
                ans[vec[i].second] = "Bronze Medal";
            } else {
               
                ans[vec[i].second] = to_string(i + 1);
            }
        }
       return ans;
    }
};