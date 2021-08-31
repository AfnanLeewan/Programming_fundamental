#include <stdio.h>
#include <string.h>
int main () {
  char str[1000];
   scanf("%s",&str);  
     printf("%s\n",&str[strlen(str)-1]);
       return(0);
}