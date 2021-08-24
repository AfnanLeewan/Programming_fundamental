#include<stdio.h>
int main(){
char str [1000];
int num[1000];
int n=0;
scanf("%s",&str);
while(str[n]!=NULL){
num[n]=str[n];
n++;
}
for (int i = 0; i < n; i++)
{      
    if(num[i]>=65&&num[i]<=90)
    {
        printf("%c",num[i]+32);
    }
     if(num[i]>=97&&num[i]<=122)
    {   
        printf("%c",num[i]-32);
    }
}
return 0;
}
