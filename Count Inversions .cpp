long long counter;

void Merge(long long A[], long long L, long long mid, long long R){
   long long B[R+1];
   long long i = L, j = mid +1, k = L;
   while(i <= mid && j <= R){
       if(A[i] <= A[j])
           B[k++] = A[i++];
       else{
           B[k++] = A[j++];
           counter += mid - i +1;
   }
 }
 while(i <= mid)
     B[k++] = A[i++];
 while(j <= R)
     B[k++] = A[j++];
     
 for(long long i = L; i <= R; i++)
      A[i] = B[i];
}

void MergeSort(long long A[], long long L, long long R){
   if (L<R){
       long long mid = (L+R)/2;
       MergeSort(A, L, mid);
       MergeSort(A, mid+1, R);
       Merge(A, L, mid, R);
   }
}
    long long int inversionCount(long long A[], long long N)
    {
        // Your Code Here
        counter = 0;
        MergeSort(A, 0, N-1);
        return counter;
    }
