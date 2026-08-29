class Solution {
  public:
    string longest(vector<string>& arr) {
        // code here
        int n=arr.size();
        string ans=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i].length()>ans.length()){
                ans=arr[i];
            }
            
        }
        return ans;
    }
};
