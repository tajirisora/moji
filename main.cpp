#include"moji.h"
#include"loadData.h"
#include<stdio.h>
int main() {
	int num = 0;
	loadData("data.txt", &num);
	moji(num);
	return 0;
}