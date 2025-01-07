class Solution {
public:
    int hammingWeight(int n) {
        int a=__builtin_popcount(n);
        return a;
    }
};