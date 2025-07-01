class Solution {
public:
    int possibleStringCount(string word) {
        int n=word.size();
        int cnt=1;
        // unordered_map<char,int>mp;
        for(int i=1;i<n;i++){
            if(word[i-1]==word[i]){
                cnt++;

            }
        }

        // for(auto &it:mp){
        //     if(it.second>1){
        //         cnt+=(it.second-1);
        //     }
        // }

        return cnt;
        
    }
};