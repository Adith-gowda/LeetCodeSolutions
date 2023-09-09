class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
    }
    
    int ping(int t) {
        if(t<=3000){
            q.push(t);
            return q.size();
        }
        else{
            while(!q.empty() && q.front() < t - 3000){
                q.pop();
            }
            q.push(t);
            return q.size();
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */