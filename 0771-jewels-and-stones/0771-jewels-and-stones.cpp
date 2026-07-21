class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int isjewel[128]={0};
        for (char jewel:jewels){
            isjewel[jewel]=1;
        }
        int jewelcount=0;
        for(char stone:stones){
            jewelcount+=isjewel[stone];
        }
        return jewelcount;
    }
};