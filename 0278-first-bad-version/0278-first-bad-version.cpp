// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left=1;
        long long right=n;
        if(n==1) return 1;
        long long mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(!isBadVersion(mid)){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return left;
    }
};