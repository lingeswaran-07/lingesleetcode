class Solution {
public:
    int findComplement(int num) {
        if(num==0) return 0;
        int bit=log2(num)+1;
        unsigned int m=(1U<<bit)-1;
        int ans=num^m;
        return ans;
        
    }
};