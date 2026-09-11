#include <stdio.h>



int main(){
 int n,i,arr[100];
 
 printf("Enter number of elements:");
 scanf("%d",&n);

 printf("Enter the elements:");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

 int index=0;


 for(i=0;i<n;i++){
    if (arr[i]!=0){
        arr[index]=arr[i];
        index++;
    }
 }
 while (index<n){
   arr[index]=0;
   index++;
 }

 for (i=0;i<n;i++){
   printf("%d  ",arr[i]);
 }



 return 0;
 
}