#include<stdio.h>
int main(){
int a,b;
scanf("%d %d",&a,&b);
int m1[a][b],m2[a][b];
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        scanf("%d",&m1[i][j]);
    }
    
}
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        scanf("%d",&m2[i][j]);
    }
    
}
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        printf("%d ",m1[i][j]+m2[i][j]);
    }
    printf("\n");
}


    return 0;
}