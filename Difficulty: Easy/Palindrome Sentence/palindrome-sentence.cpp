class Solution {
public:
    bool isPalinSent(string &s) {

        int st = 0;
        int end = s.length() - 1;

        while(st < end) {

            // Left side se non-alphanumeric skip karo
            while(st < end && !isalnum(s[st])) {
                st++;
            }

            // Right side se non-alphanumeric skip karo
            while(st < end && !isalnum(s[end])) {
                end--;
            }

            // Lowercase mein convert karke compare karo
            if(tolower(s[st]) != tolower(s[end])) {
                return false;
            }

            st++;
            end--;
        }

        return true;
    }
};