class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       vector<int>vec;
       int n=encoded.size();
       vec.push_back(first);
       int x=vec[0];
       for(int num:encoded){
        int a=num^x;
        vec.push_back(a);
        x=a;
       }
       return vec;
    }
};