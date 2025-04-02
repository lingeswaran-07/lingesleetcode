class Solution {
public:
    void backtrack(int ind,string &digits,string &cur,vector<string>&res,vector<string>&map){
        if(ind==digits.size()){
              res.push_back(cur);
              return;
        }

        string letter=map[digits[ind]-'0'];
        for(char ch:letter){
            cur.push_back(ch);
            backtrack(ind+1,digits,cur,res,map);
            cur.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string>map={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>res;
        string cur;

        backtrack(0,digits,cur,res,map);
        return res;
        
    }
};