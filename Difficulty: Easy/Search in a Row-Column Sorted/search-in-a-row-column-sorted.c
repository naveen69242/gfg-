bool matSearch(int** arr, int n, int m, int x) {
    // code here
    int i=0;
    int j=m-1;
    while(i<n&&j>=0){
        if(arr[i][j]==x){
            return true;
        }else if(arr[i][j]>x){
            j--;
        }else{
            i++;
        }
    }
    return false;
}
