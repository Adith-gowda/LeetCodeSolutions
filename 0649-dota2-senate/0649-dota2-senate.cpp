class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> qr,qd;
        for(int i=0;i<senate.size();i++){
            if(senate[i]=='R'){
                qr.push(i);
            }
            else{
                qd.push(i);
            }
        }
        while(!qr.empty() && !qd.empty()){
            int rindex = qr.front();
            int dindex = qd.front();
            qr.pop();
            qd.pop();
            if(rindex<dindex){
                qr.push(rindex+senate.size());
            }
            else{
                qd.push(dindex+senate.size());
            }
        }
        if(qr.empty()){
            return "Dire";
        }
        return "Radiant";
    }
};