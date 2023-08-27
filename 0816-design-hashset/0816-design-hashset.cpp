class MyHashSet {
public:
    long long n = 10000001;
    vector<bool> v;
    MyHashSet() {
        // vector<bool> v(n,false);
        v.resize(n,false);
    }
    
    void add(int key) {
        v[key]=true;
    }
    
    void remove(int key) {
        if(v[key]){
            v[key]=false;
        }
    }
    
    bool contains(int key) {
        return v[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */