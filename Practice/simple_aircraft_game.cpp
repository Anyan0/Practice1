//11月17日开始
//11月20日继续。进度似乎有那么一丢丢慢吧

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#pragma warning(disable:4996)//解决kbhit（）报错

int main() {
	int x = 5, y = 10;
	int isfire=0;
	char input;//通过输入来控制小飞机

	int ny = 0;//输出一个靶子
	int ny_spped = 1;
	int getpoint = 0;//用iskilled来判断是否再输出靶子，打掉了变成1，则不再输出靶子
	int left = 0;
	int right = 20;

	while (1) {
		ny+=ny_spped;
		system("cls");//每次打印之前清屏实现动态
	//先打印飞机前的空行
	//输出子弹
		//打印靶子
		
		//让ny的值改变，并在触边的时候变成-ny来实现来回移动
			
		if (ny == right-1) {
			ny_spped=-ny_spped;
		}
		if (ny == left) {
			ny_spped = -ny_spped;
		}
		for (int i = 0; i < ny; ++i) {
			printf(" ");
		}
		printf("+\n");
			
				
		
		if (isfire == 0) {
			for (int i = 0; i < x; i++) {
				printf("\n");
			}
		}
		else {
			for (int i = 0; i < x; i++){
				for (int j = 0; j < y; j++) {
					printf(" ");
				}
				printf("  |\n");
			}
			if (y + 2 == ny) {
				getpoint++;
			}
			isfire = 0;
		}
		//打印飞机前面的空格然后打印飞机
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		//打印飞机
		//打印复杂的飞机
		printf("  *\n");
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		printf("*****\n");
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		printf(" * *\n");
		printf("\n\n\n");
		printf("\t\t\t");
		printf("point=%d", getpoint);



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
			if (input == ' ') {
				isfire=1;
			}
		}
		Sleep(50);
	}
	return 0;
}