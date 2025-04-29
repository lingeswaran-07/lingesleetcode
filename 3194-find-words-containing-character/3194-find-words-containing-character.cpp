class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n=words.size();
        for(size_t i=0;i<n;i++){
            string aa=words[i];
            for(int j=0;j<aa.size();j++){
                  if(aa[j]==x){
                    ans.push_back(i);
                    break;
                  }
            }
            
        }
        return ans;
    }
};