class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int len=flowerbed.size();
        int count=0;
        if(len>1){for(int i=0;i<len;i++){
            if(i==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                count++;
            }
            if(i==len-1 && flowerbed[i-1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                count++;
            }
            if(i>0 && i<len-1 && flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
                flowerbed[i]=1;
                count++;
            }
        }}
        else{
            if((len==1 && flowerbed[0]==0) ||n==0 ){
                return true;
            }
            else{
                return false;
            }
        }
        if(count>=n){
            return true;
        }
        else{
            return false;
        }
    }
};