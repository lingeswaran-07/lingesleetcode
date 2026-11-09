class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<string>>ans;
        string a="";
        string b="";
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(s1[i]!=s2[j]){
                a+=s1[i];
                b+=s2[j];
            }
            else{
                if(a!=""){
                    vector<string>vec;
                    vec.push_back(a);
                    vec.push_back(b);
                    ans.push_back(vec);
                    vec.clear();
                }
                a="";
                b="";
            }
            i++;
            j++;
        }
        if(a!=""){
             vector<string>vec;
                    vec.push_back(a);
                    vec.push_back(b);
                    ans.push_back(vec);
                    vec.clear();
        }
        return ans;
    }
};