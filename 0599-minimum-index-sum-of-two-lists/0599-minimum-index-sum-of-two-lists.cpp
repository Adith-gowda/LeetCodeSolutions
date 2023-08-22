class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        map<string,int> l1;
        map<string,int> l2;
        map<string,int> mp;
        for(int i=0;i<list1.size();i++){
            l1[list1[i]]=i;
            mp[list1[i]]++;
        }
        for(int i=0;i<list2.size();i++){
            l2[list2[i]]=i;
            mp[list2[i]]++;
        }
        int mn = INT_MAX;
        vector<string> v;
        for(auto &p : mp){
            if(p.second>1){
                v.push_back(p.first);
            }
        }
        for(int i=0;i<v.size();i++){
            if((l1[v[i]]+l2[v[i]]) < mn){
                mn = l1[v[i]]+l2[v[i]];
            }
        }
        vector<string> res;
        for(int i=0;i<v.size();i++){
            if(mn == l1[v[i]]+l2[v[i]]){
                res.push_back(v[i]);
            }
        }
        return res;
    }
};