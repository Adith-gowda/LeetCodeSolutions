class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> v;
        int n = height.size();
        int l = 0;
        int r = n-1;
        int mx = INT_MIN;
        while(l<r){
            int vol = (min(height[l],height[r])*(r-l));
            mx = max(mx,vol);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mx;
    }
};