class Solution {
public:

   bool isanagram(string &s,string &l){
    if(s.length()!=l.length()) return false;
    int fre[26]={0};
    for(char ch:s) fre[ch-'a']++;
    for(char ch:l) fre[ch-'a']--;

    for(int i=0;i<26;i++){
        if(fre[i]!=0) return false;
    }
    return true;
   }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        
        for(string word:strs){
            bool flag=false;
            for(auto &g:ans){
                if(isanagram(g[0],word)){
                    g.push_back(word);
                    flag=true;
                    break;
                }
            }
            if(!flag){
                ans.push_back({word});
            }

        }
        return ans;
    }
};