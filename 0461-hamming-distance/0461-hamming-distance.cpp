class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=0;
        res^=x;
        res^=y;
        int ans=__builtin_popcount(res);
        return ans;
    }
};