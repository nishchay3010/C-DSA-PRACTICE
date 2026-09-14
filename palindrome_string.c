#include <stdio.h>


int main(){
 char str[100];
 int len=0,i;

 printf("Enter string:");
 scanf("%s",str);

 while(str[len]!='\0'){
    len++;
    }
 for (i=0;i<len/2;i++){
    if(str[i]!=str[len-1-i]){
        printf("not palindrome");
        return 0;
    }
}
 
 printf("palindrome");
    
 

 return 0; 
}