class Solution {
public:
    int countBitsFlip(int a, int b) {

        int count = 0;
        int num = a ^ b;

        while(num > 0) {
            if(num & 1) {
                count++;
            }

            num = num >> 1;
        }

        return count;
    }
};