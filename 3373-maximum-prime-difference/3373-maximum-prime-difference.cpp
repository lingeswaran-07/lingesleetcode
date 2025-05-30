class Solution {
public:
   int findprime(int &a){
    if(a<=1) return 1;
      if(a==2 ){
        return 0;
      }
      if(a%2==0) return 1;
       for(int i=3;i*i<=a;i+=2){
           if(a%i==0){
              return 1;
           }
       }
   return 0;
   }
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int find=-1;
        int lind=-1;
        for(int i=0;i<n;i++){
            int c=findprime(nums[i]);
            if(c==0){
                if(find==-1){
                    find=i;
                }
                lind=max(i,lind);
            }
            
        }
        return lind-find;
    }
};