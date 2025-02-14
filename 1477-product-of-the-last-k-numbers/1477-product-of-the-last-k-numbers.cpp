class ProductOfNumbers {
public:
  vector<int>vec;
    ProductOfNumbers() {
      
    }
    
    void add(int num) {
        vec.push_back(num);
        
    }
    
    int getProduct(int k) {
        int cnt=0;
         int p=1;
        for(int i=vec.size()-1;i>=0;i--){
            cnt++;
            p*=vec[i];
            if(cnt==k){
               break;
            }
        }
       return p;

    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */