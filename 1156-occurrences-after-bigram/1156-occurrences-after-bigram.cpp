class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        int n=text.size();
        stringstream ss(text);
        string a;
        vector<string>vec;
        while(ss>>a){
           vec.push_back(a);
        }
        vector<string>ans;
        for (size_t i=0;i<vec.size()-2;i++){
            if(vec[i]==first && vec[i+1]==second){
                     ans.push_back(vec[i+2]);
            }

        } 
        return ans;
    }
};