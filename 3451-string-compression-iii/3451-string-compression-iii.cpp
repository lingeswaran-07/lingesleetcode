class Solution {
public:
    string compressedString(string word) {
        char x;
        int i=0;
        string res;
        while(i<word.length()){
            x=word[i];
            int count=0;
            while(i<word.length() && word[i]==x && count<9){
                count++;
                i++;
                
            }
            
            res += to_string(count);
            res += x;
            }
            return res;
        }
        
    
};