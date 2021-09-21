#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
printf("%d:%.2d:%.2d",n/3600,(n/60)%60,n%60);
    return 0;
}