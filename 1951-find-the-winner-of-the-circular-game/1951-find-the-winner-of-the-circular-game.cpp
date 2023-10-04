class Solution {
public:

    int find(int ind, vector<int> &v, int k){
        if(v.size()==1) return v[0];

        ind = (ind + k - 1)%v.size();
        v.erase(v.begin()+ind);
        return find(ind,v,k);
    } 


    int findTheWinner(int n, int k) {
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(i+1);
        }
        return find(0,v,k);
    }
};