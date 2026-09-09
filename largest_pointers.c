#include <stdio.h>

int main(){
    int a,b;
    int *p,*q;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;

    if(*p>*q){
        printf("The largest number is %d",*p);
    } else {
        printf("The largest number is %d",*q);
    }
}