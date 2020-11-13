//10月26号开始
//11月13号继续
#include <stdio.h>
#include <stdlib.h>

int main() {
	//打印一个小球
	int i, j;
	int x = 1;
	int y = 10;

	
	int speed_x = 1;
	int speed_y = 1;

	int left = 0;
	int right = 20;
	int top = 0;
	int bottom = 20;

	while (1) {
		x = x + speed_x;
		y = y + speed_y;
		system("cls");//输出前把屏先清了。才有下落效果。

		//用一个循环来改变x的值让小球往下落
			
			for (i = 0; i < x; ++i)
				printf("\n");
			for (j = 0; j < y; ++j)
				printf(" ");
			printf("o\n");

			if ((x == top)||(x==bottom))
				speed_x = -speed_x;
			if ((y == left) || (y == right))
				speed_y = -speed_y;
		
	}
	
	return 0;

}