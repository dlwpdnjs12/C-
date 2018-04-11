#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

//void strcpy(char *des, char *src)
//int main()
//{
//	const char *src = "Hello nice to meet you";
//	char des[] = (char*)malloc(sizeof(char)*1024);
//
//	strcpy(des, src);
//	printf("%s\n", des);
//	
//	return 0;
//}
//
//
//void strcpy(char *des, char *src)
//{
//	int i = 0;
//	for (;src[i] = '\n';i++)
//		des[i] = src[i];
//	des[i] = '\n';
//}

void strReverse(char *str);
const int gab = 'a' - 'A';
int main()
{
	char* input = (char *)malloc(sizeof(char) * 1024);
	scanf("%s", input);
	strReverse(input);
	printf("%s\n", input);
	free(input);

	return 0;
}
void strReverse(char *str) {
	for (int i = 0; str[i] != '\n';i++) {
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= gab;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += gab;
	}
}