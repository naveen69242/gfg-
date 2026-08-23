class Solution {
  public:
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int n=arr.size();
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(caneat(arr,k,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
        bool caneat(vector<int>& arr, int k,int s){
            long long hours=0;
            for(int arr:arr){
                hours+=(arr+s-1)/s;
            }
            return hours<=k;
        }
};