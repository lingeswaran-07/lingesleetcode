class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        int cnt=0;
       vector<bool>used(n,false);
        for(int i=0;i<n;i++){
            bool place=false;
            for(int j=0;j<n;j++){
                if(!used[j] && baskets[j]>=fruits[i]){
                    place=true;
                    used[j]=true;
                    break;
                }
            }
            if(!place){
                cnt++;
            }
        }
        return cnt;
    }
};