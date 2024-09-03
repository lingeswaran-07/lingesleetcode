class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
       vector<int> even, odd;
      
    for (const auto &n: nums) {
      if (n % 2 == 1) {
        odd.push_back(n);
      } else {
        even.push_back(n);
      }
    }
    
    for (const auto &n: odd) {
      even.push_back(n);
    }
    
    return even;
    }

};