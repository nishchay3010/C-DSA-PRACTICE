#include <stdio.h>

void largest_and_smallest(int arr[], int n);

int main() {
 int arr[]={12,56,854,42,985,35,23,4};
 int n= sizeof(arr)/sizeof(arr[0]);  
 

 largest_and_smallest(arr, n);

return 0;
}

void largest_and_smallest(int arr[], int n){
    int largest =arr[0];
    int smallest = arr[0];

    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            largest=arr[i];

        }
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("Largest element: %d\n", largest);
    printf("Smallest element: %d\n", smallest);
}