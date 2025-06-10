class Solution {
public:
    int minSteps(string s, string t) {
      
      vector<int>fre(26,0);
      for(char c:s){
        fre[c-'a']++;
      }

      for(char c:t){
        fre[c-'a']--;
      }

      int cnt=0;
      for(int i=0;i<26;i++){
            cnt=cnt+abs(fre[i]);
        
      }

 return cnt;

    }
};