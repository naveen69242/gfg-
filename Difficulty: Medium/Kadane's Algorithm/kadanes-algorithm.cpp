class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxsum=INT_MIN;
        int currentsum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            currentsum+=arr[i];
            maxsum=max(maxsum,currentsum);
            if(currentsum<0){
                currentsum=0;
            }
            
        }
        return maxsum;
    }
};