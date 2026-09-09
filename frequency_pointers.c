#include <stdio.h>



int main(){

 int n,i,x,count=0;
 int a[100];

 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("Enter the elements of the array: ");
 for (i=0;i<n;i++){
    scanf("%d",&a[i]);
 }

 printf("Enter the element to find its frequency: ");
 scanf("%d",&x);

 for (i=0;i<n;i++){
    if(a[i]==x){
        count++;
    }
 }

 printf("The frequency of %d in the array is: %d", x, count);
 return 0;
}