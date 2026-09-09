#include <stdio.h>

int sum(int arr[], int n);

int main(){
    int a[100],n,i;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    printf("The sum of the array is: %d", sum(a,n));
    return 0;
}

int sum(int arr[] ,int n){
    if(n==0){
        return 0;
    }
    return arr[n-1] + sum(arr,n-1);

    }
    
