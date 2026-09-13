class Solution {
  public:
    bool isSparse(int n) {
        // code here
        while(n>0){
            int lastdigit=n&1;
            if(lastdigit==1&&(n>>1&1)==1){
                return false;
            }
            n=n>>1;
        }
        return true;
    }
};