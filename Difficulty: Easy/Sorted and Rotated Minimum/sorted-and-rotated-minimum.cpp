class Solution {
  public:
    int findMin(vector<int>& arr) {
        // code here
        int minimum=arr[0];
        for(int i=1;i<arr.size();i++){
            minimum=min(minimum,arr[i]);
        }
        return minimum;
    }
};