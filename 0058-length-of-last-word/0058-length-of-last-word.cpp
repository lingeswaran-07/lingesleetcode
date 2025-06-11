class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream st(s);
        string word;
        string last;
        while(st>>word){
            last=word;
        }

        return last.length();
        
    }
};