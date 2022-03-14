bool find3Numbers(int a[], int n, int x)
    {
        //Your Code Here
        sort(a, a+n);
        for(int i = 0; i < n; i++){
            int y = x - a[i];
            int low = i+1, high = n-1;
            while(low < high){
                if(a[low]+a[high] == y){
                    return true;
                }
                else if(a[low] + a[high] > y){
                    high--;
                }
                else if(a[low] + a[high] < y){
                    low++;
                }
            }
        }
        return false;
    }
