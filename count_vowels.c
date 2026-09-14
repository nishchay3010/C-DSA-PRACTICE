#include <stdio.h>


int main(){
 char str[100];
 int i=0,count=0;
 

 printf("Enter string:");
 scanf("%s",str);

 while(str[i]!='\0'){
    if(str[i]=='a' || str[i]=='o' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='O' || str[i]=='U' || str[i]=='E' || str[i]=='I'){
    count++;
    }
    i++;
 }

 printf("%d",count);

 return 0;
}