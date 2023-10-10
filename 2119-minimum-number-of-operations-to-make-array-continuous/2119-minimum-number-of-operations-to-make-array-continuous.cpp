class Solution {
public:
    int minOperations(vector<int>& nums) {
        int maxi=nums.size()-1;
        int ans=INT_MAX;
        set<int>st;
        for(auto it:nums)
            st.insert(it);
        vector<int>v;
        for(auto it:st)
            v.push_back(it);
        for(int i=0;i<v.size();i++)
        {
            int x=upper_bound(v.begin(),v.end(),v[i]+maxi)-v.begin();
            x=nums.size()-(x-i);
            ans=min(ans,x);
        }
        return ans;
    }
};