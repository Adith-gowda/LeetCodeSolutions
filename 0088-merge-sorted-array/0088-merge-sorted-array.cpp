class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i =0;
        int j =0;
        vector<int> sol;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                sol.push_back(nums1[i]);
                i++;
            }
            else{
                sol.push_back(nums2[j]);
                j++;
            }

        }
        while(i<m){
             sol.push_back(nums1[i]);
             i++;            
        }
        while(j<n){
            sol.push_back(nums2[j]);
            j++;            
        }
    nums1 = sol;
    }

};