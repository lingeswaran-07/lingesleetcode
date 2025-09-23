class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        map<int,int>mp;
      for(int num:arr){
        mp[num]++;
      }
      vector<int>fre;
      for(auto &it:mp){
        fre.push_back(it.second);
      }
      sort(fre.begin(),fre.end());
      int cnt=fre.size();
      for(int f:fre){
        if(k>=f){
            k-=f;
            cnt--;
        }
        else{
            break;
        }
      }
      return cnt;
    }
};