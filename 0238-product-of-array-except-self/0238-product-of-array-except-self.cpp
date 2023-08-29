class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v(nums.size(),1);
        int p=1;
        int s=1;
        for(int i=0;i<nums.size();i++){
            v[i] = v[i]*p;
            p = p*nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            v[i] = v[i]*s;
            s = s*nums[i];
        }
        return v;
    }
};