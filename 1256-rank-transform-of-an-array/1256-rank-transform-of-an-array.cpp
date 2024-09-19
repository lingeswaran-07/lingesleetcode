class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>vec=arr;
        sort(vec.begin(),vec.end());
        map<int,int>mp; 
        int rank=1;
        for(int i=0;i<vec.size();i++){
            if(mp.find(vec[i])==mp.end()){
                mp[vec[i]]=rank++;
            }
            
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mp[arr[i]];
        }
        
        return arr;
    }
};