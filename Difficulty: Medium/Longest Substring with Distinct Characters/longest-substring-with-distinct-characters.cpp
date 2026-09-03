class Solution {
public:
    int longestUniqueSubstr(string &s) {

        int freq[26] = {0};
        int start = 0;
        int ans = 0;

        for(int end = 0; end < s.length(); end++) {

            freq[s[end] - 'a']++;

            while(freq[s[end] - 'a'] > 1) {
                freq[s[start] - 'a']--;
                start++;
            }

            ans = max(ans, end - start + 1);
        }

        return ans;
    }
};