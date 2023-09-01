class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int found=0,lost=0;
        for(int i=0;i<gas.size();i++){
            found+=gas[i];
            lost+=cost[i];
        }
        if(lost>found)return -1;
        int total=0;
         int start=0;
        for(int i=0;i<gas.size();i++){
            total+=gas[i]-cost[i];
            if(total<0){
                start=i+1;
                total=0;
            }
        }
        
        return start;
    }
};