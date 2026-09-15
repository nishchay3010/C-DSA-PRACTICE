#include <stdio.h>

void bubble_sort(int arr[],int n);

int main(){
 int n=5;
 int new[]={5,3,8,6,9};
 bubble_sort(new,5);
 for(int i=0;i<5;i++){
 printf("%d",new[i]);
 }

 return 0;
}

void bubble_sort(int arr[],int n){
    int temp;
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp= arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}