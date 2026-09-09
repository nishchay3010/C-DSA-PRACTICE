#include <stdio.h>

int main(){
    int n,rem,temp,ans=1;
    printf("Enter a number:");
    scanf("%d",&n);

    temp=n;
    while(n!=0){
        rem=temp%10;
        ans=ans+rem*rem*rem;
        temp=temp/10;
    }
    if(ans==n){
        printf("%d is an Armstrong number.", n);
    }
    else{
        printf("%d is not an Armstrong number.", n);
    }
    return 0;
}