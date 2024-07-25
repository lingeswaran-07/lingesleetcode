class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;

        for(int i:arr){
            mp[i]++;
        }
        
        unordered_set<int>st;
        for(const auto &pair:mp){
            if(st.find(pair.second)!=st.end()){
                return false;
            }
            st.insert(pair.second);

        }
        return true;
        
    }
};