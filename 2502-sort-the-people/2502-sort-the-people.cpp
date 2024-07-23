class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> peoples;
        for(int i=0;i<names.size();i++){
            peoples[heights[i]] = names[i];
        }
        vector<string>vec;
        for(auto it:peoples){
            vec.push_back(it.second);
        }

        reverse(vec.begin(),vec.end());
        return vec;
    }
};