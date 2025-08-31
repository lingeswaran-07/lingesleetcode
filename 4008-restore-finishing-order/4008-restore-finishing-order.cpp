class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int num:friends){
            mp[num]++;
        }
        for(int num:order){
           
            if(mp.find(num)!=mp.end()){
                ans.push_back(num);
            }
        }
        return ans;
    }
};