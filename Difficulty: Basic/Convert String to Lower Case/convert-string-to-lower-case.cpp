
class Solution {
  public:
    string toLower(string& s) {
        // size of the string is len
        int len = s.size();
        for (int i = 0; i < len; i++) {
            // checking for each charater it is upper or not if upper then converting it
            // to lower
            if (isupper(s[i]))
                s[i] = tolower(s[i]);
        }
        // returning converted string
        return s;
    }
};