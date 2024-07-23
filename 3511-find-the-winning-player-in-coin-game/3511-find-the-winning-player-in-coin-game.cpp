class Solution {
public:
    string losingPlayer(int x, int y) {
        string a="Alice";
        string b="Bob";
        int loser=min(x,y/4);
        if(loser%2==1){
            return a;
        }
        else {
            return b;
        }
    }
};