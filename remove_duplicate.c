#include <stdio.h>


int main(){
 int n,i,arr[100];

 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("Enter the elements of the array: ");
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }

 int j=0;

 for (i=1;i<n;i++){
    if (arr[i]!=arr[j]){
        j++;
        arr[j]=arr[i];
    }
 }
 for (int k=0;k<=j;k++){
  printf("%d ",arr[k]);
 }
    

 return 0;
}