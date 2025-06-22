class Solution {
public:
    bool isprime(int a){
      if(a<=1){
        return false;
      }
      if(a==2){
        return true;
      }
      if(a%2==0) return false;
      for(int i=3;i*i<=a;i++){
        if(a%i==0 ) return false;
      }
      return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        for(auto &it:mp){
            int a=it.second;
            cout<<a<<endl;
            if(isprime(a)){
                return true;
            }
        }
        return false;
        
    }
};