class Solution {
public:
    int minOperations(string s) {
        int ans=0;
        for(char ch:s){
            int d=(26-(ch-'a'))%26;
            ans=max(ans,d);
        }
        return ans;
    }
};