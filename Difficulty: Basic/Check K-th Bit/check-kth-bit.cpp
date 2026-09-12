class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int bitmask=1 << k;
        if(n&bitmask){
            return true;
        }else{
            return false;
        }
    }
};