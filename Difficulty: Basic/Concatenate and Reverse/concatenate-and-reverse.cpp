class Solution {
  public:
    string conRevstr(string &s1, string &s2) {
        // code here
        string s=s1+s2;
        int st=0;
        int end=s.length()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
        return s;
    }
};