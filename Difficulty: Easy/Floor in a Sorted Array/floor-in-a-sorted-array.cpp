class Solution {
public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int largest = -1;

        for(int i = 0; i < n; i++) {
            if(arr[i] <= x) {
                largest = i;
            }
        }

        return largest;
    }
};