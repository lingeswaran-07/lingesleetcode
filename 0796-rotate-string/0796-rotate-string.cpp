class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        if(n!=m) return false;
        if(s==goal) return true;
        
        string h=s;
        for(int i=0;i<n;i++){
            h+=s[i];
        }
        cout<<h;
        int j=0;
        int i;
        for(i=0;i<h.length();i++){
            int cnt=0;
            if(h[i]==goal[0]){
                int ii=i;
               while(h[ii]==goal[j]){
                    if(j+1==m){
                        return true;
                    }
                    ii++;
                    j++;
               }
            }
            j=0;
        }

        return false;
    }
};