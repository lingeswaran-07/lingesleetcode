class Solution {
public:
    bool wordPattern(string pattern, string s) {
    stringstream ss(s);
    string a;
    vector<string>vec;
    while(ss>>a){
      vec.push_back(a);
    }
    if(pattern.size()!=vec.size()) return false;
    unordered_map<char,string>mp1;
    unordered_map<string,char>mp2;
    for(int i=0;i<pattern.size();i++){
        char l=pattern[i];
        string m=vec[i];
        if(mp1.find(l)!=mp1.end()){
            if(mp1[l]!=m) return false;
        }
            else{
                mp1[l]=m;
            }

            if(mp2.find(m)!=mp2.end()){
                if(mp2[m]!=l) return false;
            }
                else{
                    mp2[m]=l;
                }
            }
        


    
    return true;


        
    }
};