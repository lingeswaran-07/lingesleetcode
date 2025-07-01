class Solution {
public:
 
    bool isinrow(string &words,string &r){
        int n=words.size();
        for(char ch:words){
            if(r.find(tolower(ch))==string::npos){
                return false;
            }
        }
        return true;
    }
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        int n=words.size();
        string r1="qwertyuiop";
        string r2="asdfghjkl";
        string r3="zxcvbnm";
        for(int i=0;i<n;i++){
            if(isinrow(words[i],r1) || isinrow(words[i],r2) || isinrow(words[i],r3)  ){
                ans.push_back(words[i]);
            }
        }
        return ans;

        
    }
};