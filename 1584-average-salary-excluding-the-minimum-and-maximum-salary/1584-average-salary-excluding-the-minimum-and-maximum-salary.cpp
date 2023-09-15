class Solution {
public:
    double average(vector<int>& salary) {
        int mx=INT_MIN;
        int mn=INT_MAX;
        double sum=0;
        for(auto i:salary){
            if(i>mx){
                mx=i;
            }
            if(i<mn){
                mn=i;
            }
            sum = sum + i;
        }
        sum = sum - (mn+mx);
        return sum/(salary.size()-2);
    }
};