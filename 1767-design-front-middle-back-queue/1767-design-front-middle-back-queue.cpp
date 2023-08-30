class FrontMiddleBackQueue {
public:
    vector<int> fm;
    FrontMiddleBackQueue() {
        
    }
    
    void pushFront(int val) {
        fm.insert(fm.begin(),val);
    }
    
    void pushMiddle(int val) {
        int mid=fm.size()/2;
        fm.insert(fm.begin()+mid,val);
    }
    
    void pushBack(int val) {
        fm.push_back(val);
    }
    
    int popFront() {
        if(fm.size()==0){ return -1;}
        int temp=fm.front();
        fm.erase(fm.begin());
        return temp;
    }
    
    int popMiddle() {
        if(fm.size()==0){ return -1;}
        int temp=fm[(fm.size()-1)/2];
        fm.erase(fm.begin()+(fm.size()-1)/2);
        return temp;
    }
    
    int popBack() {
        if(fm.size()==0){ return -1;}
        int temp=fm.back();
        fm.pop_back();return temp;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */