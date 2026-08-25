class Solution {
public:
    int kthSmallest(vector<vector<int>> &mat, int k) {

        vector<int> arr;

        // Put all matrix elements into arr
        for(int i = 0; i < mat.size(); i++) {
            for(int j = 0; j < mat[i].size(); j++) {
                arr.push_back(mat[i][j]);
            }
        }

        // Built-in sort
        sort(arr.begin(), arr.end());

        // k-th smallest element
        return arr[k - 1];
    }
};