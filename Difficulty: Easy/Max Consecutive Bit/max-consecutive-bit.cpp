class Solution {
public:
    int maxConsecBits(vector<int> &arr) {
        int n = arr.size();

        int i = 0;
        int j = 1;

        int count1 = 1;
        int count2 = 1;

        int ans = 1;

        while (j < n) {

            if (arr[i] == 0 && arr[j] == 0) {
                count1++;
                ans = max(ans, count1);
            }
            else {
                count1 = 1;
            }

            if (arr[i] == 1 && arr[j] == 1) {
                count2++;
                ans = max(ans, count2);
            }
            else {
                count2 = 1;
            }

            i++;
            j++;
        }

        return ans;
    }
};