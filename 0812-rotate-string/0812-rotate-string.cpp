class Solution {
public:
    bool rotateString(string s, string goal) {
        bool flag=0;
        int n=s.length();
        if(s==goal) return true;
        for(int i=1;i<n;i++){
            
            reverse(s.begin(),s.begin()+1);
            reverse(s.begin()+1,s.end());
            reverse(s.begin(),s.end());
            cout<<s<<endl;
            if(s==goal){
                flag=1;
                break;

            }
        
        }
        cout<<s<<endl;
        if(flag==1){
            return true;
        }
        else{
            return false;
        }
        
    }
};