class MinStack {
    
public:
    map<int,int> mp;
    map<int,int>::iterator iter;
    vector<int> q;
    MinStack() {
    }
    void push(int val) {
        mp[val]++;
        q.push_back(val);
    }
    
    void pop() {
        int t = q.back();
        q.pop_back();
        if(mp[t]>1){
            mp[t]--;
        }
        else{
            iter = mp.find(t);
            if( iter != mp.end() )
                mp.erase( iter );
        }
    }
    
    int top() {
        return q.back();
    }
    
    int getMin() {
        return mp.begin()->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */