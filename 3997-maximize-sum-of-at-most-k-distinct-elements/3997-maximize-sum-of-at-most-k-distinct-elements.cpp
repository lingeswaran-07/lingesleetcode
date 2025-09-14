class Solution {
public:
    vector<int> maxKDistinct(vector<int>& vec, int k) {
        sort(vec.begin(),vec.end(),greater<int>());
        vec.erase(unique(vec.begin(),vec.end()),vec.end());
        int n=vec.size();
        if(n>k) vec.resize(k);
        return vec;
    }
};