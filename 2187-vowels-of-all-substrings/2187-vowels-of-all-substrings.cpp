class Solution {
    bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            return true;
            
        }
        return false;
    }
public:
    long long countVowels(string word) {
     long long cnt=0;

    int n = word.length();
     
        for (int i = 0; i < n; i++) {
            if (isvowel(word[i])) {
                cnt += (long long)(i + 1) * (n - i);
            }
        }


      return cnt;
    }
};