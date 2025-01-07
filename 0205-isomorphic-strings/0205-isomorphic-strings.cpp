class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;

        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        int n=s.size();
        for(int i=0;i<n;i++){
            char l1=s[i];
            char m1=t[i];
            if(mp1.find(l1)!=mp1.end()){
                if (mp1[l1] != m1) return false;
            }
                else{
                    mp1[l1]=m1;

                }
            

             if(mp2.find(m1)!=mp2.end()){
              if (mp2[m1] != l1) return false;
             }
                else{
                    mp2[m1]=l1;

                }
            
        }
        
        return true;
    }
};