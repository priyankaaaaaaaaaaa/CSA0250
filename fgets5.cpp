#include<stdio.h>
#include<string.h>
int main()
{
	char name1[50],name2[50];
	fgets(name1, sizeof(name1), stdin);
	fgets(name2, sizeof(name2), stdin);
	strcat(name1,name2);
	puts(name1);
	puts(name2);
	
}
