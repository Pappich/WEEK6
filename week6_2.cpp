#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS 
int main ()
{
	char str[100];
	scanf("%s", &str);
	for(int i=0;i<str[i];i++)
	{
		if( str[i] != str[i-1])
		{
			printf("%c", str[i]);
		}
	}
	return 0;
	}
