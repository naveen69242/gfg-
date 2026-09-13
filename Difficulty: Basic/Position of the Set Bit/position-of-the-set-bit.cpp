class Solution {
public:
    int findPosition(int n) {
        int pos = 1;
        int count = 0;
        int answer = 0;

        while(n > 0) {
            int lastdigit = n & 1;

            if(lastdigit == 1) {
                count++;
                answer = pos;
            }

            n = n >> 1;
            pos++;
        }

        if(count == 1) {
            return answer;
        }

        return -1;
    }
};