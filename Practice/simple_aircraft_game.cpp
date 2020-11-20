//11月17日开始
//11月20日继续。进度似乎有那么一丢丢慢吧

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996)//解决kbhit（）报错

int main() {
	int x = 5, y = 10;
	char input;//通过输入来控制小飞机

	while (1) {
		system("cls");//每次打印之前清屏实现动态
	//先打印飞机前的空行
		for (int i = 0; i < x; i++) {
			printf("\n");
		}
		//打印飞机前面的空格然后打印飞机
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		//打印飞机
		printf("*");
		printf("\n");

		////通过输入WASD来让飞机移动
		//scanf_s("%c", &input);
		//if (input == 'w') {
		//	x--;
		//}
		//if (input == 's') {
		//	x++;
		//}
		//if (input == 'a') {
		//	y--;
		//}
		//if (input == 'd') {
		//	y++;
		//}

		//但是之前的方法输入之后还要回车交互效果很差，更换getch()函数来获得更好的体验，并用kbhit判断是否有输入
		if (kbhit()) {
			input =_getch();
			if (input == 'w') {
				x--;
			}
			if (input == 's') {
				x++;
			}
			if (input == 'a') {
				y--;
			}
			if (input == 'd') {
				y++;
			}
		}
	}
	return 0;
}