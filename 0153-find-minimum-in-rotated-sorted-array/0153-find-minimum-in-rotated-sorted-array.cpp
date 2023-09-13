class Solution {
public:
    int findMin(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        int mid;
        if(nums[left]<=nums[right]) return nums[left];
        while(left<=right){
            mid=(left+right)/2;
            if(nums[left]>=nums[right] && nums[mid]>=nums[right]){
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        return nums[mid];
    }
};