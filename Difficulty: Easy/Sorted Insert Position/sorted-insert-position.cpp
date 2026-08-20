class Solution {
public:
    int searchInsertK(vector<int>& arr, int k) {

        int st = 0;
        int end = arr.size() - 1;

        while(st <= end) {

            int mid = st + (end - st) / 2;

            if(arr[mid] == k) {
                return mid;
            }
            else if(arr[mid] > k) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return st;
    }
};