class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mp;
        vector<int>e,o;
        int ans=INT_MIN;
        for(char c:s){
            mp[c]++;
        }
        for(auto it:mp){
            if(it.second%2==0){
                e.push_back(it.second);
            }
            if(it.second%2!=0 ) {
                o.push_back(it.second);
            }
        }
       
       for(int i:o){
        for(int j:e){
            ans=max(ans,i-j);
        }
       }
       return ans;
    }
};