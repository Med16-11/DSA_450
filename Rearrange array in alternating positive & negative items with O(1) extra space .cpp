#include<iostream>
using namespace std;


void rotate(int arr[], int start, int end){
    int temp = arr[end];
    for(int i = end-1; i>=start; i--){
        arr[i+1] = arr[i];
    }
    arr[start] = temp;
}
void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void rearrange(int arr[], int n){
    int i = 0, j = 0, k = 0;
    while(i < n && j < n && k < n){
        if(k%2 == 0){
            if(arr[k] >= 0){
                i = k;
                j = k;
                while(i<n && arr[i]>=0)i++;
                if(i>=n) break;
                rotate(arr,j,i);
            }
        }
        else{
            if(arr[k]<0){
                i = k;
                j = k;
                while(j < n && arr[j] < 0) j++;
                if(j >= n) break;
                rotate(arr,i,j);
            }
        }
        k++;
    }
}


int main()
{
     
    int arr[] = { -5, -2, 5, 2,4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Given array is \n";
    printArray(arr, n);
 
    rearrange(arr, n);
 
    cout << "Rearranged array is \n";
    printArray(arr, n);
 
    return 0;
}
