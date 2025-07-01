class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        char ch= keysPressed[0];
        int n= releaseTimes.size();
        int maxi=releaseTimes[0];
        for(int i=1;i<n;i++){
            int m=abs(releaseTimes[i]-releaseTimes[i-1] );
            if(m>maxi ){
                maxi=m;
                ch=keysPressed[i];
                
            }
            else if (m == maxi && keysPressed[i] > ch) {
                ch = keysPressed[i];
            }
        }
        return ch;
        
    }
};