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
       
        int a=*max_element(e.begin(),e.end());
        int b=*max_element(o.begin(),o.end());
        return b-a;
    }
};