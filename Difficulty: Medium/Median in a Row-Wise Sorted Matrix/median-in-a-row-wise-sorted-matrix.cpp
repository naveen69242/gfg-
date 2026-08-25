class Solution {
public:
    int median(vector<vector<int>> &mat) {

        int n = mat.size();
        int m = mat[0].size();

        int arr[n * m];
        int index = 0;

        // Matrix ke saare elements array mein store karo
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                arr[index] = mat[i][j];
                index++;
            }
        }

        // Built-in sort
        sort(arr, arr + n * m);

        // Median return
        return arr[(n * m) / 2];
    }
};