class Solution {
public:
    int findSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int sum = arr[0];

        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] != arr[i-1]) {
                sum += arr[i];
            }
        }

        return sum;
    }
};