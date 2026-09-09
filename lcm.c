#include <stdio.h>


int main(){
 int a,b,x,y,temp;
 printf("Enter two numbers to find their LCM: ");
 scanf("%d %d",&a,&b);

 x=a;
 y=b;

 while(y!=0){
    temp=y;
    y=x%y;
    x=temp;
 }

 printf("The LCM of %d and %d is: %d", a, b, (a*b)/x);
 
 
 return 0;
}