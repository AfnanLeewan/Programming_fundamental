#include<stdio.h>
int main(){
char str [1000];
int n=0,m=0,l=0;
scanf("%s",&str);
while(str[n]!=NULL){
if (str[n]>='A'&&str[n]<='Z')
{
    printf("%c",str[n]+' ');
}
if (str[n]>='a'&&str[n]<='z')
{
    printf("%c",str[n]-' ');
}
n++;
}
printf("\n%d",n);
    return 0;
}