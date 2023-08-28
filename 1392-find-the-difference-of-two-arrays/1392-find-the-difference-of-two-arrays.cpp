class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1;
        set<int> s;
        // unordered_map<int,int> mp2;
        vector<vector<int>> v(2);
        for(auto p : nums1){
            s.insert(p);
        }
        for(auto p : s){
            mp1[p]++;
        }
        s.clear();
        for(auto p : nums2){
            s.insert(p);
        }
        for(auto p : s){
            mp1[p]++;
        }
        for(auto p : nums1){
            if(mp1[p]==1){
                mp1[p]--;
                v[0].push_back(p);
            }
        }
        for(auto p : nums2){
            if(mp1[p]==1){
                mp1[p]--;
                v[1].push_back(p);
            }
        }
        return v;
    }
};