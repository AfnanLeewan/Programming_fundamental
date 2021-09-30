#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h> 
#include<string.h>

int main()
{
	FILE* ptr1, * ptr2;
	char file[100], str;

	printf("From :\n");
	scanf("%s", file);
	ptr1 = fopen(file, "r");
	if (ptr1 == NULL)
	{
		printf("Cannot open file %s \n", file);
		exit(0);
	}
	printf("TO:\n");
	scanf("%s", file);
	ptr2 = fopen(file, "w");
	if (ptr2 == NULL)
	{
		printf("Cannot open file %s \n", file);
		exit(0);
	}
	str = fgetc(ptr1);
	while (str != EOF)
	{
		fputc(str, ptr2);
		str = fgetc(ptr1);
	}

	fclose(ptr1);
	fclose(ptr2);
	return 0;
}
