#include<stdio.h>
int main(){
int n,h ,min, sec;
scanf("%d",&n);
sec=n%60;
min=n/60;
h=min/60;
min%=60;
printf("%d:%.2d:%.2d",h,min,sec);
    return 0;
}