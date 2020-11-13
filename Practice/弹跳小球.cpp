//10月26号开始
//11月13号继续
#include <stdio.h>
#include <stdlib.h>

int main() {
	//打印一个小球
	int i, j;
	int x = 1;
	int y = 10;

	int height = 10;
	int speed = 1;

	while (1) {
		x = x + speed;
		system("cls");//输出前把屏先清了。才有下落效果。

		//用一个循环来改变x的值让小球往下落
			
			for (i = 0; i < x; ++i)
				printf("\n");
			for (j = 0; j < y; ++j)
				printf(" ");
			printf("o\n");

			if (x == height)
				speed = -speed;
			if (x == 0)
				speed = -speed;
		
	}
	
	return 0;

}