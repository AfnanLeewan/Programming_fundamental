#include<stdio.h>

int main()
{int i=0;
char str[1000];
scanf("%s",&str);
while(str[i]!=NULL){
switch (str[i])
{
    case 'a':
        printf( ".-");
        break;
    case 'b':
        printf("-...");
         break;
    case 'c':
        printf( "-.-.");
         break;
    case 'd':
        printf("-..");
         break;
    case 'e':
         printf(".");
          break;
    case 'f':
        printf( "..-.");
         break;
    case 'g':
        printf ("--.");
         break;
    case 'h':
       printf  ("....");
        break;
    case 'i':
       printf ("..");
        break;
    case 'j':
        printf (".---");
         break;
    case 'k':
        printf  ("-.-");
         break;
    case 'l':
        printf (".-..");
         break;
    case 'm':
        printf ("--");
         break;
    case 'n':
        printf ("-.");
         break;
    case 'o':
       printf ("---");
        break;
    case 'p':
        printf (".--.");
         break;
    case 'q':
       printf ("--.-");
        break;
    case 'r':
        printf (".-.");
         break;
    case 's':
        printf  ("...");
         break;
    case 't':
        printf ("-");
         break;
    case 'u':
        printf ("..-");
         break;
    case 'v':
       printf ("...-");
        break;
    case 'w':
        printf (".--");
         break;
    case 'x':
        printf  ("-..-");
         break;
    case 'y':
        printf  ("-.--");
         break;
    case 'z':
        printf  ("--..");      
    case 'A':
        printf( ".-");
        break;
    case 'B':
        printf("-...");
         break;
    case 'C':
        printf( "-.-.");
         break;
    case 'D':
        printf("-..");
         break;
    case 'E':
         printf(".");
          break;
    case 'F':
        printf( "..-.");
         break;
    case 'G':
        printf ("--.");
         break;
    case 'H':
       printf  ("....");
        break;
    case 'I':
       printf ("..");
        break;
    case 'J':
        printf (".---");
         break;
    case 'K':
        printf  ("-.-");
         break;
    case 'L':
        printf (".-..");
         break;
    case 'M':
        printf ("--");
         break;
    case 'N':
        printf ("-.");
         break;
    case 'O':
       printf ("---");
        break;
    case 'P':
        printf (".--.");
         break;
    case 'Q':
       printf ("--.-");
        break;
    case 'R':
        printf (".-.");
         break;
    case 'S':
        printf  ("...");
         break;
    case 'T':
        printf ("-");
         break;
    case 'U':
        printf ("..-");
         break;
    case 'V':
       printf ("...-");
        break;
    case 'W':
        printf (".--");
         break;
    case 'X':
        printf  ("-..-");
         break;
    case 'Y':
        printf  ("-.--");
         break;
    case 'Z':
        printf  ("--..");      
}
i++;
printf(" ");
}
 return 0;
}