int smallestSubWithSum(int arr[], int n, int x){
    int min_len = n+1;
    for(int start = 0; start < n; start++){
        int curr_sum = arr[start];
        if(curr_sum > x){
            return 1;
        }
        for(int end = start + 1; end < n; end ++){
            curr_sum += arr[i];
            if(curr_sum > x && (end - start + 1) < n){
                min_len = (end - start + 1);
            }
        }
    }
    return min_len;
}
