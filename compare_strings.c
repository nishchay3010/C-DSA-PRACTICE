#include <stdio.h>


int main(){
 char s1[100],s2[100];
 int i=0;
 

 printf("Enter string s1:");
 scanf("%s",&s1);

 printf("Enter string s2:");
 scanf("%s",&s2);

 while(s1[i]!= '\0' && s2[i]!= '\0'){
    if(s1[i]==s2[i]){
        printf("equal");
        return 0;
    }
    
    i++;
    }
 printf("not equal");
 return 0;
 }


