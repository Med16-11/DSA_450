void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i = 0, j = 0, k = n-1;
	    while(i <= k && j < m){
	        if(arr1[i] < arr2[j]){
	            i++;
	            continue;
	        }
	        else{
	            int temp = arr1[k];
	            arr1[k] = arr2[j];
	            arr2[j] = temp;
	            k--;
	            j++;
	        }
	    }
	    sort(arr1, arr1+n);
	    sort(arr2, arr2+m);
	}
