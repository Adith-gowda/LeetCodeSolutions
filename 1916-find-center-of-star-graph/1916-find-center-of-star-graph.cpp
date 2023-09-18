class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int> mp;
        int ele;
        int mx=INT_MIN;
        for(auto i : edges){
            mp[i[0]]++;
            mp[i[1]]++;
        }
        for(auto p : mp){
            if(mx<p.second){
                ele = p.first;
                mx = max(mx,p.second);
            }
        }
        return ele;
    }
};