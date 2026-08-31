class Solution {
  public:
    string firstAlphabet(string &s) {
        // code here
        string ans="";
        ans+=s[0];
        for(int i=1;i<s.length();i++){
            if(s[i-1]==' '){
                ans+=s[i];
            }
            
        }
        return ans;
    }
};