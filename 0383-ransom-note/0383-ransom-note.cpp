class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>str;
        for(char c:magazine){
            str[c]++;
        }

        for( char c: ransomNote){
            if(str[c]<=0){
                return 0;
            }
            str[c]--;
        }
      return 1;
    }
};