class Solution {
  public:
    string removeCharacter(string &s, int pos) {
        // code here
        string ans="";
        for(int i=0;i<s.length();i++){
            if(i!=pos){
                ans+=s[i];
            }
            
        }
        return ans;
        
    }
};