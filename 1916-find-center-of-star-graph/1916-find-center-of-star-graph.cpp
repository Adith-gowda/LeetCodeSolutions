// class Solution {
// public:
//     int findCenter(vector<vector<int>>& edges) {
//         unordered_map<int,int> mp;
//         int ele;
//         int mx=INT_MIN;
//         for(auto i : edges){
//             mp[i[0]]++;
//             mp[i[1]]++;
//         }
//         for(auto p : mp){
//             if(mx<p.second){
//                 ele = p.first;
//                 mx = max(mx,p.second);
//             }
//         }
//         return ele;
//     }
// };
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges[0][0] == edges[1][0]) return edges[0][0];
        else if(edges[0][0] == edges[1][1]) return edges[0][0];

        return edges[0][1];
    }
};