int firstoccurence(vector<int>& nums,int target){
    int low = 0;
    int index1 = -1 ;
    int high = nums.size()-1;
   while(high>=low){
        int mid = low +(high-low)/2;
        if(nums[mid]==target){
            high = mid-1;
            index1 = mid ;
             
             
        }
        else if (nums[mid]>target){
            high = mid -1 ; 
        }
        else{
            low = mid + 1;
        }
    
    
    }
    return index1 ; 
}

int lastoccurence(vector<int>& nums,int target){
    int low = 0;
    int index2 = -1;
    int high = nums.size()-1;
   while(high>=low){
        int mid = low +(high-low)/2;
        if(nums[mid]==target){
            low = mid+1;
            index2 = mid ; 
             
        }
        else if (nums[mid]>target){
            high = mid -1 ; 
        }
        else{
            low = mid + 1;
        }

    }
    return index2 ; 

}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> res;

        int x = firstoccurence(nums,  target);
        int y = lastoccurence( nums,  target);

        res.push_back(x);
        res.push_back(y);
        
        return res;
    }
};