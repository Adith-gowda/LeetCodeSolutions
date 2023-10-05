class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a,b,c1=0,c2=0;
        for(int i: nums){
            if(i==a) c1++;
            else if(i==b) c2++;
            else if(c1==0) a=i,c1=1;
            else if(c2==0) b=i,c2=1;
            else c1--,c2--;
        }
        vector<int> ans;
        if(count(nums.begin(),nums.end(),a)>nums.size()/3) 
            ans.push_back(a);
        if(count(nums.begin(),nums.end(),b)>nums.size()/3) 
            ans.push_back(b);
        return ans;
    }
};