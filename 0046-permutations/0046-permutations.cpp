class Solution {
public:

    void find(vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans, vector<bool> &fre){
        if(ds.size()==nums.size()){
            ans.push_back(ds);
            return;
        }

        for(int i=0;i<nums.size();i++){
            if(fre[i]==false){
                ds.push_back(nums[i]);
                fre[i]=true;
                find(nums,ds,ans,fre);
                ds.pop_back();
                fre[i]=false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<bool> fre(nums.size(),false);
        find(nums,ds,ans,fre);
        return ans;
    }
};