class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string a;
        vector<string>vec;
        while(ss>>a){
           vec.push_back(a);
        }
        return vec.size();
        
    }
};