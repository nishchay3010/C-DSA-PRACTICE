#include <stdio.h>


int main(){
 int i=0;
 char str[100];

 printf("Enter string:");
 scanf("%s",str);

 while(str[i]!='\0'){
    if (str[i]>='A' && str[i]<='Z'){
        str[i] +=32;
    }
    else if (str[i]>='a' && str[i]<='z'){
        str[i] -=32;
    }
    i++;
}
    printf("%s",str);
 return 0;
 }
