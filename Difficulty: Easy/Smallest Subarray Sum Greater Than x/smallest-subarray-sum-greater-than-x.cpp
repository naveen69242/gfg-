class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int n=arr.size();
        int minimum=INT_MAX;
        for(int i=0;i<n;i++){
            int st=i;
            int end=st;
            int sum=0;
            while(end<n){
                sum=sum+arr[end];
                if(sum>x){
                    int length=end-st+1;
                    minimum=min(minimum,length);
                    break;
                }else{
                    end++;
                }
            }
        }
        if(minimum==INT_MAX){
            return 0;
        }
        return minimum;
    }
};