class Solution {
public:
    string intToRoman(int num) {
        int arr[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string r[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   int i=0;
   string ans="";
        while(num!=0){
            if(num>=arr[i]){
                ans+=r[i];
                num-=arr[i];
            }
            else{
                i++;
            }
        }
        return ans;
    }
};