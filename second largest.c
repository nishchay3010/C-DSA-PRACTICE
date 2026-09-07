#include <stdio.h>

int main(){
 int a[100];
 int n,largest,second,i;

 printf("Enter the number of elements in the array: ");
 scanf("%d",&n);

 printf("Enter %d elements in the array: ",n);
 for(i=0;i<n;i++){
    scanf("%d",&a[i]);
 }

 largest=a[0];
 second=a[1];
 for (i=1;i<n;i++){
    if (a[i]>largest){
        second=largest;
        largest=a[i];
    } else if (a[i]>second && a[i]!=largest){
        second=a[i];


    }
 }

    printf("The largest element is %d\n", largest);
    printf("The second largest element is %d\n", second);
    return 0;
}