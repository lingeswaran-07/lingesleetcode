class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.length()!=s2.length()) return false;
        if(s1==s2) return true;
        int k=-1;
        int cnt=0;
        int j=-1;
        for(int i=0;i<s2.length();i++){
            if(s1[i]!=s2[i]){
                cnt++;
                if(k==-1){
                    k=i;
                }
                else{
                    j=i;
                }
            }
        }

        if(cnt==2){
            swap(s2[k],s2[j]);
        }

        if(s1==s2){
            return true;
        }
        return false;
    }
};