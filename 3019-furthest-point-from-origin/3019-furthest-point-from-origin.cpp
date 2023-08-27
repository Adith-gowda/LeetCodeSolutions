class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int c=0;
        int r=0;
        int l=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='_'){
                c++;
            }
            if(moves[i]=='R'){
                r++;
            }
            if(moves[i]=='L'){
                l++;
            }
        }
        return abs(r-l)+c;
    }
};