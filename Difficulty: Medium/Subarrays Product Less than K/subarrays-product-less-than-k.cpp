// class Solution {
// public:
//     int countSubarray(vector<int>& arr, int k) {
//         int n = arr.size();
//         int count = 0;

//         for(int i = 0; i < n; i++) {
//             int st = i;
//             int end = st;
//             int product = 1;

//             while(end < n) {
//                 product = product * arr[end];

//                 if(product < k) {
//                     count = count + 1;
//                     end++;
//                 }
//                 else {
//                     break;   // ye important hai
//                 }
//             }
//         }

//         return count;
//     }
// };
// this was my approach
class Solution {
public:
    int countSubarray(vector<int>& arr, int k) {
        if(k<=1){
            return 0;
        }
        int left=0;
        long long product=1;
        int count=0;
        
        for(int right=0;right<arr.size();right++){
            product=product*arr[right];
        
        while(product>=k){
            product=product/arr[left];
            left++;
        }
         count=count+(right-left+1);
        }
        return count;
       
    }
};
