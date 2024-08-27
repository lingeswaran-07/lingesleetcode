class Solution {
public:
    int maxVowels(string s, int k) {
        int n=s.length();
        string vowel="aeiou";
        int maxcnt=0;
        int curcnt=0;
        for(int i=0;i<k;i++){
            if(vowel.find(s[i]) != string::npos){
                curcnt++;
            }
        }
        maxcnt=curcnt;
        for(int i=k;i<n;i++){
            if(vowel.find(s[i - k]) != string::npos){
                curcnt--;
            }
            if(vowel.find(s[i]) != string::npos){
                curcnt++;
            }
            maxcnt=max(curcnt,maxcnt);
        }
    return maxcnt;
    }
};