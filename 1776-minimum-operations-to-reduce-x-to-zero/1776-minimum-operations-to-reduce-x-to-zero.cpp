// class Solution {
// public:
//     int minOperations(vector<int>& nums, int x) {
//         int left=0;
//         int right=nums.size()-1;
//         int c=0;
//         while((left<=right) && (nums[left]<=x || nums[right]<=x)){
//             if(nums[left]>=nums[right] && nums[left]<=x){
//                 // cout<<nums[left]<<" ";
//                 x-=nums[left];
//                 left++;
//                 c++;
//                 if(x==0) break;
//             }
//             else{
//                 if(nums[right]>x) break;
//                 // cout<<nums[right]<<" ";
//                 x-=nums[right];
//                 right--;
//                 c++;
//                 if(x==0) break;
//             }
//         }
//         if(c==0 || x!=0){
//             return -1;
//         }
//         return c;
//     }
// };
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int total=accumulate(nums.begin(),nums.end(),0);
        total-=x;
        if(total==0) return n;
        int i=0,currSum=0,length=0;  
        for(int j=0;j<n;j++){
            currSum+=nums[j];
            while(i<n && currSum>total){
                currSum-=nums[i++]; 
            }
            if(currSum==total) length=max(length,j-i+1);  
        }
        if(!length) return -1;
        return n-length;
    }
};
