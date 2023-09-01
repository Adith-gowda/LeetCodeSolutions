class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> :: iterator it;
        it = nums.begin();
        advance(it,1);
        int prev = 0;
        for(;it!=nums.end();it++){
            *(it) = *(it-1)+*(it);
        }
        return nums;

    }
};