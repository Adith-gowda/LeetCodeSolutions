class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int indexDiff, int valueDiff) {
        // unordered_map<int,int> mp;
        // // unordered_set<int> s;
        // if(valueDiff==0){
        //     for(int i=0;i<nums.size();i++){
        //         if(mp[nums[i]]==0){
        //             mp[nums[i]]=i+1;
        //         } 
        //         else{
        //             if(abs(mp[nums[i]]-(i+1))<=(indexDiff)){
        //                 return true;
        //             }
        //             else{
        //                 mp[nums[i]]=i+1;
        //             }
        //         }
        //     }
        // }
        // sort(nums.begin(),nums.begin()+indexDiff);
        // for(int i=1;i<nums.size();i++){
        //     if(abs(nums[i]-nums[i-1])<=valueDiff){
        //         if(abs(i-(i-1))<=indexDiff){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        for(int i=0;i<nums.size();i++){
            int k = i+indexDiff+1;
            if(k>nums.size()){
                k=nums.size();
            }
            for(int j=i+1;j<k;j++){
                if(abs(nums[j]-nums[i])<=valueDiff){
                    return true;
                }
            }
        }
        return false;
    }
};