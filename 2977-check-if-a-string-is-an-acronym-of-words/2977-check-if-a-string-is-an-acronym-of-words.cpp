class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int n1=words.size();
        int n2=s.size();
        string ss="";
        for(const auto &st:words){
            ss += st[0];
        }
        if(s!=ss){
            return false;
        }
        return true;
        
    }
};