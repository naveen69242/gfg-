class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int ans=0;
        int position=1;
        while(n>0){
            int lastdigit=n&1;
            if(lastdigit==1){
                ans=position;
                break;
            }
            n=n>>1;
            position++;
        }
        return ans;
    }
};