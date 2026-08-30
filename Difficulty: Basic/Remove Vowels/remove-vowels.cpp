class Solution {
  public:
    string removeVowels(string& s) {
        // code here
        string ans="";
        for(int i=0;i<s.length();i++){
          if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
              ans+=s[i];
          }
        }
        return ans;
    }
};