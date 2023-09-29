class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int incr=0;
        int decr=0;

        for(int i=0;i<nums.size()-1;i++)
        {
          if(nums[i]<nums[i+1])incr=1;
          if(nums[i]>nums[i+1])decr=1;
        }
        return (incr+decr==2)?0:1;
    }
};