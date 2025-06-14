class Solution {
public:
    const int Maxi=26;
    bool checkIfPangram(string sentence) {
        vector<bool>vec(Maxi,false);
        for(int i=0;i<sentence.size();i++){
            if('a'<=sentence[i] && sentence[i]<='z'){
                vec[sentence[i]-'a']=true;
            }
        }

        for(int i=0;i<vec.size();i++){
            if(vec[i]==false) {
                return false;
            }
        }
        return true;
    }
};