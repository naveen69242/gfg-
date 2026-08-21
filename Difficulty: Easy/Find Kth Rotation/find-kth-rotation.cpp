class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int smallest=0;
        int n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]<arr[i-1]){
                smallest=i;
            }
        }
        return smallest;
    }
};
