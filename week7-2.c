#include<stdio.h>
#include<string.h>
void morse(char x);
int main(){
char str[1000];scanf("%s",&str);
for (int i = 0; i < strlen(str); i++)
{
    morse(str[i]);
}
    return 0;
}
void morse(char x){
if (x=='a'||x=='A'){printf( ".-");}
if (x=='b'||x=='B')
{printf("-...");
}if (x=='c'||x=='C')
{printf( "-.-.");
}if (x=='d'||x=='D')
{ printf("-..");
}if (x=='e'||x=='E')
{ printf(".");
}if (x=='f'||x=='F')
{ printf( "..-.");
}if (x=='g'||x=='G')
{printf ("--.");
}if (x=='h'||x=='H')
{printf  ("....");
}if (x=='i'||x=='I')
{ printf ("..");
}if (x=='j'||x=='J')
{printf (".---");
}if (x=='k'||x=='K')
{ printf  ("-.-");
}if (x=='l'||x=='L')
{ printf (".-..");
}if (x=='m'||x=='M')
{ printf ("--");
}if (x=='n'||x=='N')
{ printf ("-.");
}if (x=='o'||x=='O')
{printf ("---");
}if (x=='p'||x=='P')
{printf (".--.");
}if (x=='q'||x=='Q')
{printf ("--.-");
}if (x=='r'||x=='R')
{printf (".-.");
}if (x=='s'||x=='S')
{ printf  ("...");
}
if (x=='t'||x=='T'){
 printf ("-");
}
if (x=='u'||x=='U'){
    printf ("..-");
}
if (x=='v'||x=='V')
{ printf ("...-");
}if (x=='w'||x=='W')
{ printf (".--");
}if (x=='x'||x=='X')
{printf  ("-..-");
}if (x=='y'||x=='Y')
{printf  ("-.--");
}if (x=='z'||x=='Z')
{ printf  ("--..");      
}
printf(" ");
}


 