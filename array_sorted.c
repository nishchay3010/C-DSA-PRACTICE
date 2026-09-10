#include <stdio.h>

int main(){
 int n,i,arr[100],sorted=1;

 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("Enter the elements of the array: ");
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }

 for(i=0;i<n-1;i++){
    if (arr[i]>arr[i+1]){
        sorted=0;
        break;
    }
 }
 if(sorted){
    printf("The array is sorted in ascending order.");
 } else {
    printf("The array is not sorted in ascending order.");
    
 }
 return 0;
}