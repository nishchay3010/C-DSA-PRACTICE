#include <stdio.h>


int main(){
 int i,n,arr[100];
 printf("Enter number of elements:");
 scanf("%d",&n);

 printf("Enter the elements:");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
 int last=arr[n-1];

  for (i=n-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=last;

  for (i=0;i<n;i++){
    printf("%d  ",arr[i]);
 }

 return 0;
}