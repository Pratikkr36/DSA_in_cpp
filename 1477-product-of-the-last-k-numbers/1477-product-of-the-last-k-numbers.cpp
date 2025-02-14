class ProductOfNumbers {
public:
    vector<int>nums;
    int prod = 1;
    ProductOfNumbers() {}
    
    void add(int num) {
        if(num == 0){
            nums.clear();
            prod = 1;
        }else{
            prod *= num;
            nums.push_back(prod);
        }
    }
    
    int getProduct(int k) {
        if(k > nums.size())return 0;
        if(k == nums.size())return nums.back();
        return nums.back()/nums[nums.size() - k - 1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */