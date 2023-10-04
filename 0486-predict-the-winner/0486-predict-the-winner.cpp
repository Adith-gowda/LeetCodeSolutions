class Solution {
public:
int f (int ss, int se, vector<int>&nums,int turn)
{
    if(ss>se) return 0;
    if(turn ==0)
    {
        int opt1 = nums[ss]+ f(ss+1,se,nums,1);
        int opt2 = nums[se]+ f(ss,se-1,nums,1);
        return max(opt1,opt2);
    }else{
       int opt1 = -nums[ss]+ f(ss+1,se,nums,0);
        int opt2 = -nums[se]+ f(ss,se-1,nums,0);
        return min(opt1,opt2);
    }
}
    bool predictTheWinner(vector<int>& nums) {
        int totalScore = f(0,nums.size()-1,nums,0);
        if(totalScore>=0) return true;
        return false;
    }
};