class Solution {
  public:
    int leastWeightCapacity(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canload(arr,d,mid)){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
            
        }
        bool canload(vector<int>& arr, int d,int cap){
            int day=1;
            int curr=0;
            for(int w:arr){
                if(curr+w>cap){
                    day++;
                    curr=w;
                }else{
                    curr=curr+w;
                }
            }
            return day<=d;
        }
};