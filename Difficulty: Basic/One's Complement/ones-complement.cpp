class Solution {
public:
    int onesComplement(int n) {

        int mask = 1;

        while(mask <= n) {
            mask = mask << 1;
        }

        mask = mask - 1;

        return n ^ mask;
    }
};