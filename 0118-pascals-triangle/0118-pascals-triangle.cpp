class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        for(int i=1;i<=numRows;i++){
            int c = 1;
            vector<int> temp;
            for(int j=1;j<=i;j++){
                temp.push_back(c);
                c =  c*(i-j)/j;
            }
            v.push_back(temp);
        }
        return v;
    }
};