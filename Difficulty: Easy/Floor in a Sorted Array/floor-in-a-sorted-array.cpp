class Solution {
public:
    int findFloor(vector<int>& arr, int x) {
        int n = arr.size();
        int st=0;
        int end=n-1;
        int ans=-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]<=x){
                st=mid+1;
                ans=mid;
            }else{
                end=mid-1;
            }
        }
        return ans;
        
    }
};