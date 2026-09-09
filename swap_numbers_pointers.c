#include <stdio.h>
void swap(int *a,int *b);

int main(){
    int a,b;
    printf("Enter two numbers to swap:");
    scanf("%d %d" ,&a,&b);
    
    swap(&a,&b);

    printf("Swapped numbers are %d and %d",a,b);
    return 0;
}

void swap(int*a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}