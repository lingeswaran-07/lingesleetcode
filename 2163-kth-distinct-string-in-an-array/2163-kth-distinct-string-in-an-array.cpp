class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       map<string,int>mp;
       for (const auto& s : arr) {
          mp[s]++;
    }
         vector<string>vec;
         for(const auto& s:arr){
            if(mp[s]==1){
                 vec.push_back(s);
            }
         }
          if (k > vec.size()) {
            return "";
        }
        return vec[k-1];
    }
};