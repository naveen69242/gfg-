class Solution {
public:

    string reverseWords(string &s) {

        // Extra consecutive dots remove
        for(int i = 0; i < s.length() - 1; i++) {

            if(s[i] == '.' && s[i+1] == '.') {
                s.erase(i+1, 1);
                i--;
            }
        }

        // Starting dot remove
        if(s[0] == '.') {
            s.erase(0, 1);
        }

        // Ending dot remove
        if(s[s.length() - 1] == '.') {
            s.erase(s.length() - 1, 1);
        }


        // Reverse complete string using swap
        int st = 0;
        int end = s.length() - 1;

        while(st < end) {
            swap(s[st], s[end]);
            st++;
            end--;
        }


        // Reverse each word using swap
        st = 0;

        for(int i = 0; i <= s.length(); i++) {

            if(i == s.length() || s[i] == '.') {

                end = i - 1;

                while(st < end) {
                    swap(s[st], s[end]);
                    st++;
                    end--;
                }

                st = i + 1;
            }
        }

        return s;
    }
};