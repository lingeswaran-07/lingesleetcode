class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int a=arr[i];
            for(int j=i+1;j<n;j++){
                a^=arr[j];
                if(a==0){
                    cnt+=(j-i);
                }
            }
               
        }
        return cnt;
    }
};