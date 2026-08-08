class Solution {
public:
    int findUnique(vector<int> &arr) {
        int n = arr.size();

        if(n == 1) {
            return arr[0];
        }

        sort(arr.begin(), arr.end());

        // First element
        if(arr[0] != arr[1]) {
            return arr[0];
        }

        // Middle elements
        for(int i = 1; i < n - 1; i++) {
            if(arr[i] != arr[i - 1] && arr[i] != arr[i + 1]) {
                return arr[i];
            }
        }

        // Last element
        if(arr[n - 1] != arr[n - 2]) {
            return arr[n - 1];
        }

        return -1;
    }
};