class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n=operations.size();
        vector<int>res;
        int b;
        for(int i=0;i<n;i++){
           
            if(operations[i]=="C"){
                if(!res.empty()){
                res.pop_back();
                }
                
            }
            else if(operations[i]=="D"){
                int n=res.size();
                if(!res.empty()){
                 res.push_back(res[n-1]*2);
                }

            }
            else if(operations[i]=="+"){
                int n=res.size();
                if(n>=2){
                res.push_back(res[n-1]+res[n-2]);
                }
            }
            else{
                 int a=stoi(operations[i]);
                 res.push_back(a);
            }
        }

        int sum=accumulate(res.begin(),res.end(),0);
        return sum;
    }
};