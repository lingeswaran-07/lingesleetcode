class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int num :arr){
            mp[num]++;
        }
        int maxi=-1;
        int ans=-1;

        for(auto &it:mp){
            if(maxi<it.second){
                maxi=it.second;
                ans=it.first;
            }
        }
        return ans;
        
    }
};