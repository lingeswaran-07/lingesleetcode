class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        for(int num :arr){
            mp[num]++;
            if(mp[num]>n/4){
                return num;
            }
        }
        
        return -1;
        
    }
};