// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<nums.size();i++){
//             if(nums[i-1]==nums[i]) return nums[i];
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while (nums[i] > 0){
            int tmp = nums[i];
            nums[i] = 0;
            i = tmp;
        }
        return i;
    }
};