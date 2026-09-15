class Solution {
  public:
    int maxConsecutiveOnes(int n) {
        // code here
        int maxlength=0;
        int currentlength=0;
        while(n>0){
            int lastdigit=n&1;
            if(lastdigit!=0){
                currentlength++;
                maxlength=max(maxlength,currentlength);
            }else{
                currentlength=0;
            }
            n=n>>1;
        }
        return maxlength;
        
    }
};
