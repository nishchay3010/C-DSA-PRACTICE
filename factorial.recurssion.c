#include <stdio.h>
 
int factorial(int n);

int main(){

    int n,i;

    printf("Enter the number of terms:");
    scanf("%d",&n);

    int fact=1;

    fact = factorial(n);
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}

int factorial(int n){

    if (n==0 || n==1){
        return 1;
    } else {
        return n*factorial(n-1);
    }
}