class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> ans;
        while(left<right){
            if(numbers[left]+numbers[right]==target){
                ans.push_back(left+1);
                ans.push_back(right+1);
                return ans;
            }
            else if((numbers[left]+numbers[right])<target) left++;
            else right--;
        }
        return ans;
    }
};