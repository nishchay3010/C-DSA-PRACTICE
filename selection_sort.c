#include <stdio.h>

void selection_sort(int arr[],int n);


int main(){
 int n=5;
 int new[]={5,3,8,6,9};
 selection_sort(new,5);
 for(int i=0;i<5;i++){
 printf("%d",new[i]);
 }

 return 0;
}
void selection_sort(int arr[],int n){
    for (int i=0;i<n-1;i++){
        int smallestindex=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[smallestindex]){
                smallestindex=j;
                int temp=arr[i];
                arr[i]=arr[smallestindex];
                arr[smallestindex]=temp;

            }
        }
    }
}