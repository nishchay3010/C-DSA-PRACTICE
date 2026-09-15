#include <stdio.h>

void insertion_sort(int arr[],int n);

int main(){
 int n=5;
 int new[]={5,3,8,6,9};
 insertion_sort(new,5);
 for(int i=0;i<5;i++){
 printf("%d",new[i]);
 }

 return 0;
}
 void insertion_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;


        }
        arr[prev+1]=curr;
    }
        }
    
 