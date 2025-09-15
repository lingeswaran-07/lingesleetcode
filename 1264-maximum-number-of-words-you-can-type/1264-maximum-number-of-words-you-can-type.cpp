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
        for(int i=0;i<st.size();i++){
            string s=st[i];
            int flag=0;
            for(int j=0;j<s.size();j++){
                if(mp.find(s[j])!=mp.end()){
                    flag=1;
                    break;
                }
            }
            if(!flag){
                cnt++;
            }
        }

        return cnt;
    }
};