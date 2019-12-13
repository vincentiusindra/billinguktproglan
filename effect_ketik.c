#include <stdio.h>
#include <string.h>
void ketik(char* a, int b)
{
	int i;
	for(i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
		Sleep(b);
	}
}
