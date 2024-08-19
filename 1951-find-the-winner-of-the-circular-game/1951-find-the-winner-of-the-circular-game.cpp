class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        int cnt=1;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()>1){
            int temp=q.front();
            q.pop();
            if(cnt==k){
                cnt=1;
                continue;
            }
            q.push(temp);
            cnt++;

        }
        return q.front();
    }
};