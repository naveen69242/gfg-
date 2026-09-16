class Solution {
public:
    vector<int> singleNum(vector<int>& arr) {

        int x = 0;

        // XOR of all elements
        for(int i = 0; i < arr.size(); i++) {
            x = x ^ arr[i];
        }

        // Rightmost set bit
        int bit = x & (-x);

        int a = 0;
        int b = 0;

        // Divide numbers into two groups
        for(int i = 0; i < arr.size(); i++) {

            if(arr[i] & bit) {
                a = a ^ arr[i];
            }
            else {
                b = b ^ arr[i];
            }
        }

        vector<int> ans;

        if(a < b) {
            ans.push_back(a);
            ans.push_back(b);
        }
        else {
            ans.push_back(b);
            ans.push_back(a);
        }

        return ans;
    }
};