class Solution {
  public:
    bool isMultipleOf3(string& s) {
        // code here
        int rem=0;
        for(int i=0;i<s.length();i++){
            rem = (rem * 2 + (s[i] - '0')) % 3;
        }
        return rem==0;
        
    }
};