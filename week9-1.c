#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

int main()
{
	FILE* ptr1;
	char file[100], str;
	printf("From :\n");
	scanf("%s", file);
	ptr1 = fopen(file, "r");
	fclose(ptr1);
	FILE* ptr2;
	printf("TO:\n");
	scanf("%s", file);
	ptr2 = fopen(file, "w");
	str = fgetc(ptr1);
	while (str != EOF)
	{
		fputc(str, ptr2);
		str = fgetc(ptr1);
	}
	fclose(ptr2);
	return 0;
}
