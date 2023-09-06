class ProductOfNumbers {
    vector<long long> preProd;
    int n;
public:
    ProductOfNumbers() {
        preProd.push_back(1);
        n =1;
    }
    
    void add(int num) {
        if(num == 0){
            preProd.clear();
            preProd.push_back(1);
            n=1;
        }
        else{
        preProd.push_back(num* preProd[n-1]);
        n++;
        }
    }
    
    int getProduct(int k) {
        if(n-k-1 < 0) return 0;
        return preProd[n-1] / preProd[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */