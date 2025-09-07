class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        if(n==1) return {0};
        if(n==2) return {-1,1};
        if(n%2==0) {
            int a=n/2;
        for(int i=1;i<=a;i++){
            ans.push_back(i);
            ans.push_back(-i);
        }
        }
        else{
            int a=n/2;
        for(int i=1;i<=a;i++){
            ans.push_back(i);
            ans.push_back(-i);
        }
        ans.push_back(0);
            

        }
        return ans;
        
    }
};