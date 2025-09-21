class Solution {
public:
    string largestPalindromic(string num) {
        unordered_map<char,int>mp;
        for(char &ch:num){
            mp[ch]++;
        }
        priority_queue<pair<char,int>>pq;
        for(auto &it:mp){
            pq.push({it.first,it.second});
        }

        string left="";
        string right="";
        string middle="";
        while(!pq.empty()){
            char ch=pq.top().first;
            int n=pq.top().second;
            pq.pop();
            int x=n/2;
            left+=string(x,ch);
            right=string(x,ch)+right;
            if(n%2==1 && middle=="") {
                middle=ch;
            }

        }
        string ans=left+middle+right;
        int i=0;
        int n=ans.size();
        int j=n-1;
        while(i<j && ans[i]==ans[j] && ans[i]=='0'){
            i++;
            j--;
        }
        ans=ans.substr(i,j-i+1);
        return ans==""?"0":ans;
    }
};