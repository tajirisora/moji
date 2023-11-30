#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include "loadData.h"
void loadData(const char* filename, int* num)
{
	FILE* fp = fopen(filename, "r");
	assert(fp);
	fscanf(fp, "%d", num);
	char line[256];
	while (fgets(line, sizeof(line), fp) != NULL) {
		printf("%s", line);
	}
	fclose(fp);
}
