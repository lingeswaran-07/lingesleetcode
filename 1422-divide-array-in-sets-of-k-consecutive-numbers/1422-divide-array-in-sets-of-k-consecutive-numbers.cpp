class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
          int n=nums.size();

        if(n%k!=0){
            return false;
        }
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }

        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:mp){
            pq.push(it.first);
        }
        
        while(!pq.empty()){
            int ele=pq.top();
            for(int i=0;i<k;i++){
                    int val=ele+i;
                    if(mp[val]==0){
                        return false;
                    }
                    mp[val]--;
               if(mp[val]==0 && pq.top()==val){
                pq.pop();
               }
            }
        }
        return true;
        
        
    }
};