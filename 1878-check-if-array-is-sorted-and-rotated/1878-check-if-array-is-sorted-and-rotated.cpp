class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=0;
        int k;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                k = i;
                flag=1;
                break;
            }
        }
        if(flag==0){
            return true;
        }
        vector<int> v;
        for(int i=k;i<nums.size();i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            v.push_back(nums[i]);
        }
        // for(auto &pr : v){
        //     cout<<pr<<" ";
        // }
        for(int i=0;i<nums.size()-1;i++){
            // cout<<v[i]<<" "<<v[i+1]<<endl;
            if(v[i] > v[i+1]){
                return false;
            }
        }
        return true;
    }

};