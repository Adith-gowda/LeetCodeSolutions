class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>mp;
        for(auto ele:nums)
        {
            mp[ele]++;
        }
        int sum=0;
        for(auto ele:mp)
        {
            if(ele.second>1)
            {
                int sum1=0;
                for(int i=ele.second-1;i>=0;i--)
                {
                    sum1=sum1+i;
                }
                sum=sum+sum1;
            }
        }
        return sum;
    }
};