class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int s1=accumulate(aliceSizes.begin(),aliceSizes.end(),0);
        int s2=accumulate(bobSizes.begin(),bobSizes.end(),0);
        int d=(s2-s1)/2;

        unordered_set<int>bob(bobSizes.begin(),bobSizes.end());

        for(int i:aliceSizes){
            int y=i+d;
            if(bob.count(y)){
                return {i,y};
            }
        }
        return {};

    }
};