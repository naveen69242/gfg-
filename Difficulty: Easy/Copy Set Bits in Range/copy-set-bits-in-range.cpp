class Solution {
public:
    int setSetBit(int x, int y, int l, int r) {

        for(int i = l; i <= r; i++) {

            // Check if ith bit of y is 1
            if(y & (1 << (i - 1))) {

                // Set ith bit of x
                x = x | (1 << (i - 1));
            }
        }

        return x;
    }
};