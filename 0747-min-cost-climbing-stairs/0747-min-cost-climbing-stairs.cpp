class Solution {
public:
    int dp[1001];
    int f(vector<int>&cost,int i){
        if(i>=cost.size())return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i]=cost[i]+min(f(cost,i+1),f(cost,i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        return  min(f(cost,0),f(cost,1));
    }
};