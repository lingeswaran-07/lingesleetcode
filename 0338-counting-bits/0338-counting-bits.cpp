class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>vec;
        for(int i=0;i<=n;i++){
            int cnt=__builtin_popcount(i);
            vec.push_back(cnt);
        }
        return vec;
    }
};