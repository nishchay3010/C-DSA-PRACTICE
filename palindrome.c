#include <stdio.h>
#include <string.h>


int main(){
 char str[100];
 int i,len , palindrome = 1;
  scanf("%s", &str);
  len=strlen(str);
  for (int i=0;i<len/2;i++){
    if (str[i]==str[len-i-1]){
        printf("the string %s is a palindrome\n", str);
    } else {
        palindrome = 0;
        printf("the string %s is not a palindrome\n", str);
        break;
    }
  }
  return 0;
}

