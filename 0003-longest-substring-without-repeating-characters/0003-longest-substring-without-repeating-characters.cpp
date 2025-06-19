class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int maxi=0;
        unordered_set<char>st;
        for(int i=0;i<s.length();i++){
            while(st.find(s[i])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            maxi=max(maxi,i-l+1);
        }
        return maxi;
    }
};