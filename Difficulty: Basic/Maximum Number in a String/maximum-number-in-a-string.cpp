class Solution {
public:
    int extractMaximum(string &s) {

        int num = 0;
        int maxi = -1;

        for(int i = 0; i < s.length(); i++) {

            if(s[i] >= '0' && s[i] <= '9') {

                num = num * 10 + (s[i] - '0');
                maxi = max(maxi, num);

            }
            else {
                num = 0;
            }
        }

        return maxi;
    }
};