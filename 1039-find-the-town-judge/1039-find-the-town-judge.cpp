class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      unordered_map<int,int>mp;
      for(auto t:trust){
         mp[t[0]]--;
         mp[t[1]]++;
      }

      for(int i=1;i<=n;i++){
        if(mp[i]==n-1) return i;
      }
      return -1;
    }

};