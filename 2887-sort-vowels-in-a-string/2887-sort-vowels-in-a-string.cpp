class Solution {
public:
    bool isVowel(char &ch){
        if(ch=='A' ||  ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }
    string sortVowels(string s) {
        string v="";
        for(char ch:s){
            if(isVowel(ch)){
                v+=ch;
            }
        }
        sort(v.begin(),v.end());
        int j=0;
         for(int i=0;i<s.length();i++){
            if(isVowel(s[i])){
                s[i]=v[j];
                j++;
            }
        }
        return s;

    }
};