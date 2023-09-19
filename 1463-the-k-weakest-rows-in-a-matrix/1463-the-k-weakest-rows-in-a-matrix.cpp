class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> ans;
        int m = mat.size();
        int n  = mat[0].size();
        for(int i=0;i<m;i++){
            int sum = 0;
            for(int j = 0;j<n;j++){
                sum = sum + mat[i][j];
            }
            ans.push_back(make_pair(sum,i));
        }
        sort(ans.begin(),ans.end());
        vector<int> result;
        for(int i = 0;i<k;i++){
            result.push_back(ans[i].second);
        }
        return result;
    }
};