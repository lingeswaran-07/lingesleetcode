class Solution {
public:
    int countPoints(string rings) {
        int n=rings.size();
        unordered_map<int,set<char>>mp;
        for(int i=0;i<n;i+=2){
            char ch=rings[i];
            char ch1=rings[i+1];
            mp[ch1].insert(ch);

        }
        int cnt=0;
        for(auto &it:mp){
            if(it.second.size()==3){
                cnt++;
            }
        }
        return cnt;
    }
};