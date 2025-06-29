class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        // set<int>st1(nums1.begin(),nums1.end());
        // set<int>st2(nums2.begin(),nums2.end());
      
        

        // vector<vector<int>>ans;
        // vector<int>temp;
        // for(int i=0;i<st1.size();i++){
        //     if(mp[st1[i]]<2){
        //     temp.push_back(st1[i]);
        //     }

        // }
      

        // for(int i=0;i<st2.size();i++){
        //     if(mp[st2[i]]<2){
        //     temp.push_back(st2[i]);
        //     }

        // }
        // ans.push_back(temp);
        // return ans;


        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int num:nums1){
            mp1[num]++;
        }

        for(int num:nums2){
            mp2[num]++;
        }


      vector<vector<int>>ans;
      set<int>temp;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            if(mp2.find(nums1[i])==mp2.end() ){
                temp.insert(nums1[i]);
            }
        }
        vector<int>v1(temp.begin(),temp.end());
        ans.push_back(v1);
        temp.clear();

          for(int i=0;i<m;i++){
            if(mp1.find(nums2[i])==mp1.end() ){
                temp.insert(nums2[i]);
            }

        }
        vector<int>v2(temp.begin(),temp.end());
          ans.push_back(v2);
           temp.clear();

           return ans;


        
    }
};