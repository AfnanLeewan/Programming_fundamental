#include<stdio.h>
int main (){
char str[1000];
int n=0;
scanf("%s",&str);
while (str[n]!=NULL)
{
    if(str[n+1]==NULL){
            printf("%c",str[n]);
    }
    n++;
}
    return 0;
}