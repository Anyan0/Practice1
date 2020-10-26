#include <stdio.h>
#include <stdlib.h>

int main() {
	//打印一个小球
	int i, j;
	int x = 5;
	int y = 10;

	for(x=1;x<10;x++){//用一个循环来改变x的值让小球往下落
		system("cls");//输出前把屏先清了。才有下落效果。
		for (i = 0; i < x; ++i)
			printf("\n");
		for (j = 0; j < y; ++j)
			printf(" ");
		printf("o\n");

	}
	return 0;

	
}