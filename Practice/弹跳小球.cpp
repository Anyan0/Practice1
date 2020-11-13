//10月26号开始
//11月13号继续
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

//让光标回到指定的（x,y）位置
void gotoXY(int x, int y) {
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(out, pos);
}

int main() {
	//打印一个小球
	int i, j;
	int x = 1;
	int y = 10;

	
	int speed_x = 1;
	int speed_y = 1;

	int left = 1;
	int right = 19;
	int top = 1;
	int bottom = 19;

	int boder_up = top-1;
	int boder_down = bottom+1;
	int boder_left = left-1;
	int boder_right = right+1;
	
	while (1) {
		x = x + speed_x;
		y = y + speed_y;
		system("cls");//输出前把屏先清了。才有下落效果。

		int boder_up = top - 1;
		int boder_down = bottom + 1;
		int boder_left = left - 1;
		int boder_right = right + 1;
		//打印边框
		for (int n = 0; n < boder_right; n++) {
			printf("-");
		}
		printf("\n");
		for (int n = 1; n < boder_down - 1; n++) {
			printf("|");
			for (int m = 0; m < boder_right - 2; m++) {
				printf(" ");
			}
			printf("|");
			printf("\n");

		}
		for (int n = 0; n < boder_right; n++) {
			printf("-");
		}
		printf("\n");
		gotoXY(1, 1);//让光标回到初始的（1,1，）位置开始小球的框内弹跳
		//用一个循环来改变x的值让小球往下落
			
			for (i = 1; i < x; ++i)
				printf("\n");
			for (j = 1; j < y; ++j)
				printf(" ");
			printf("o\n");
			Sleep(20);//用于控制小球的速度

			if ((x == top)||(x==bottom)){
				speed_x = -speed_x;
				//printf("\a");//碰到边界响铃
			}
			if ((y == left) || (y == right)) {
			
				speed_y = -speed_y;
				//printf("\a");//碰到边界响铃
			}
		
	}
	
	return 0;

}

