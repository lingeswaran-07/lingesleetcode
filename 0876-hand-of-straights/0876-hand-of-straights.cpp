class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
         int n=hand.size();

        if(n%groupSize!=0){
            return false;
        }
        map<int,int>mp;
        for(int num:hand){
            mp[num]++;
        }

        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto it:mp){
            pq.push(it.first);
        }
        
        while(!pq.empty()){
            int ele=pq.top();
            for(int i=0;i<groupSize;i++){
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