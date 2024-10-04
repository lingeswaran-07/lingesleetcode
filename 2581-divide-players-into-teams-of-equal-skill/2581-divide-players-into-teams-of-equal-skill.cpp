class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size();
      
        int i=0;
        int j=n-1;
        int k=n/2;
       int add=accumulate(skill.begin(),skill.end(),0);
       int val = add/k;
       long long sum=0;
     
        while(i<=j){
            if(skill[i]+skill[j]==val){
               
                sum+=(skill[i]*skill[j]);
                i++;
            j--;
            }else{
                return -1;
            }
          
            
        }

        if(sum==0){
            return -1;
        }
    
            return sum;
     
       
    }
};