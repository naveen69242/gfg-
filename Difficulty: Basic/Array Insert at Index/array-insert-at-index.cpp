class Solution {
public:
    void insertAtIndex(vector<int>& arr, int index, int val) {
        int n = arr.size();

        // Size increase karo
        arr.push_back(0);

        // Elements ko right shift karo
        for(int i = n; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        // Value insert karo
        arr[index] = val;
    }
};