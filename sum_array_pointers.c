#include <stdio.h>


int main(){
 int n ,sum=0,i;
 int a[100];
 int *p;
 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("Enter the elements of the array: ");
 for (i=0;i<n;i++){
    scanf("%d",&a[i]);

 }

 p=a;
 for(i=0;i<n;i++){
    sum=sum+*(p+i);
    
 }
 printf("The sum of the elements in the array is: %d", sum);
 return 0;
}