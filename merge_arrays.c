#include <stdio.h>


int main(){
 int i,n1,n2;
 int a[100];
 int b[100];
 
 
 
 printf("Enter number of elements in 1:");
 scanf("%d",&n1);

 printf("Enter number of elements in 2:");
 scanf("%d",&n2);

 printf("Enter the elements in 1:");
 for(i=0;i<n1;i++){
    scanf("%d",&a[i]);
    }

 printf("Enter the elements in 2:");
 for(i=0;i<n2;i++){
    scanf("%d",&b[i]);
    }
 int c[200];

 for(i=0;i<n1;i++){
    c[i]=a[i];
 }

 for(i=0;i<n2;i++){
    c[n1+i]=b[i];
 }

 for(i=0;i<n1+n2;i++){
    printf("%d ",c[i]);
 }
 return 0;
}
