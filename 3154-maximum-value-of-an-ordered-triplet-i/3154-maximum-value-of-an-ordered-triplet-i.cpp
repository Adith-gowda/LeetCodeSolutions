class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return 0; 
        }

        long long mx = INT_MIN;
        for (int i = 0; i < n - 2; ++i) {
            for (int j = i + 1; j < n - 1; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    mx = max(mx, (long long)(nums[i] - nums[j]) * nums[k]);
                }
            }
        }
        return mx<0? 0:mx;
    }
};