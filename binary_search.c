#include <stdio.h>


int main(){
 int i,n,arr[100],key;

 printf("Enter number of elements:");
 scanf("%d",&n);

 printf("Enter the elements:");
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }

 printf("Enter key:");
 scanf("%d",&key);

 int high=n-1;
 int low=0;

 while(low<=high){
    int mid=(low+high)/2;

    if(arr[mid]==key){
        printf("element found at mid index %d",mid);
        return 0;
    }
    
    else if(arr[mid]<key){
        low=mid+1;
    }
    else {
        high =mid-1;
    }
    printf("not found");
  
 }

 return 0;
}

