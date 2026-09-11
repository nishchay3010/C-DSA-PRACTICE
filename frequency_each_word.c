#include <stdio.h>


int main(){
 int i,j;
 char str[100];

 printf("Enter string:");
 scanf("%s",str);

 for(i=0;str[i]!='\0';i++){
    int count=1;
    
    if(str[i]=='*'){
        continue;
    }
    for(j=i+1;str[j]!='\0';j++){
        if(str[j]==str[i]){
            count++;
            str[j]='*';
        }

    }
    printf("frequency of %c\n = %d\n",str[i],count);

 }
 



 return 0;
}