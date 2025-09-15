class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>mp;
        for(char ch:brokenLetters){
            mp[ch]++;
        }
        stringstream ss(text);
        string word;
        vector<string>st;
        while(ss>>word){
            st.push_back(word);
        }
        int cnt=0;
        for(auto word:st){
            int flag=0;
            for(int j=0;j<word.size();j++){
                if(mp.find(word[j])!=mp.end()){
                    cnt++;
                    break;
                }
            }
        }

        return st.size()-cnt;
    }
};