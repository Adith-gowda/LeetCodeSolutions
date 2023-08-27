class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // int count=0;
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1 && n==1 && flowerbed[0]==0){
            return true;
        }
        else if(flowerbed.size()==1 && n==1 && flowerbed[0]==1){
            return false;
        }
        else if(flowerbed.size()<=n && n!=0){
            return false;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            n--;
            if(n==0){
                return true;
            }
            flowerbed[0]=1;
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0){
            n--;
            if(n==0){
                return true;
            }
            flowerbed[flowerbed.size()-1]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(n==0){
                return true;
            }
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        return false;
    }
};