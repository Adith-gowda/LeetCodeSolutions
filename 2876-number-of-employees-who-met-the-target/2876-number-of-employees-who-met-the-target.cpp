class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int t = 0;
        for(auto p : hours){
            if(p>=target){
                t++;
            }
        }
        return t;
    }
};