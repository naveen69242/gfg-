class Solution {
  public:
    vector<int> printPalindromes(int m, int n) {
        // code here
        vector<int>ans;
        for(int i=m;i<=n;i++){
            if(ispalindrome(i)){
                ans.push_back(i);
            }
            
        }
        return ans;
    }
        bool ispalindrome(int num){
            int original=num;
            int rev=0;
            while(num>0){
                int digit = num % 10;
                rev = rev * 10 + digit;
                num = num / 10;
            }
            if(rev==original){
                return true;
            }else{
               return false;
            }
        }
    
};