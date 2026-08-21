class Solution {
  public:
    bool isPalindrome(vector<int> &arr) {
        // code here
        int n=arr.size();
        int st=0;
        int end=n-1;
        while(st<end){
            if(arr[st]!=arr[end]){
                return false;
            }else{
                st++;
                end--;
            }
        }
        return true;
    }
};
            