class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v(candies.size(),false);
        int mx = INT_MIN;
        for(auto pr : candies){
            mx = max(mx,pr);
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= mx){
                v[i]=true;
            }
        }
        return v;
    }
};