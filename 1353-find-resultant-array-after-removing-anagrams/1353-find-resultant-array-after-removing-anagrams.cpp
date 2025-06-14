class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
       vector<string>ans;
       int n=words.size();
       for(int i=0;i<n;i++){
        if(i==0){
            ans.push_back(words[i]);
        }
        else{
            string pre=words[i-1];
            string cur=words[i];
            sort(pre.begin(),pre.end());
            sort(cur.begin(),cur.end());
            if(cur!=pre){
                 ans.push_back(words[i]);

            }
        }

       }

       return ans;
    }
};