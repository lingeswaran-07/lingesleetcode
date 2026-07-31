#include <bits/stdc++.h>
class Solution {
public:
    string replaceDigits(string s) {
        string alp="abcdefghijklmnopqrstuvwxyz";
        int n=s.length();
        int i=0;
        int j=1;
        if(n==1){
            return s;
        }
        string ans=s;
        while(j<n){
            char fl=s[i];
            char sl=s[j];
            int e=sl-'0';
            int o=alp.find(fl);
            ans[j]=alp[o+e];
            j+=2;
            i+=2;
        }

        return ans;
    }
};