class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        set<int> s;
        for(auto p : arr){
            mp[p]++;
        }
        for(auto pr : mp){
            s.insert(pr.second);
        }
        return mp.size()==s.size();
    }
};