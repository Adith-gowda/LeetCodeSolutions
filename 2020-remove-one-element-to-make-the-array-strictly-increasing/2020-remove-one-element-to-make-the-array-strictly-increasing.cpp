class Solution {
public:
    bool isIncreasing(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        } 
        return true;
    }
    bool canBeIncreasing(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        if(n==1){
            return true;
        }
        else if(isIncreasing(nums)){
            return true;
        }
        else{
            for(int i=0;i<n;i++){
                int removedElement = nums[i];
                nums.erase(nums.begin() + i);
                if(isIncreasing(nums)){
                    c++;
                    return true;
                }
                else{
                    nums.insert(nums.begin() + i, removedElement);
                }
            }
        }
        if(c==0){
            return false;
        }
        return true;
    }
    
};