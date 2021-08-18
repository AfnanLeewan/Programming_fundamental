#include <stdio.h>
void avr(float x[10]){
    float sum=0,avr;
for (int i = 0; i < 10; i++)
{
    sum+=x[i];
}
avr=sum/10;
printf("%.2f",avr);

}
int main(){
float a[10];
for (int i = 0; i < 10; i++)
{
    scanf("%f",&a[i]);
}
printf("ความสูงของนักเรียนตั้งเเต่คนที่ 1 ถึงคนที่ 10 :");
for (int i = 0; i < 10; i++)
{
    printf(" %.2fcm ",a[i]);
}
printf("\nความสูงเฉลี่ยของนักเรียน 10 คน : ");
avr(a);
printf("cm");




    return 0;
}