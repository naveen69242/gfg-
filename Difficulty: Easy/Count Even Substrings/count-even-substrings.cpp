class Solution {
public:
    int countEvenSubstr(string& s) {
        int count = 0;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '0' || s[i] == '2' || s[i] == '4' ||
               s[i] == '6' || s[i] == '8') {

                count += i + 1;
            }
        }

        return count;
    }
};