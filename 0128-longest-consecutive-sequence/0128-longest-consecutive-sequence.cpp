class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }

        int maxlen=0;
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int len=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    len++;
                    x=x+1;
                }
                maxlen=max(len,maxlen);
            }
        }
        return maxlen;
    }
};