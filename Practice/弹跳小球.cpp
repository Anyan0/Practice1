//10��26�ſ�ʼ
//11��13�ż���
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

//�ù��ص�ָ���ģ�x,y��λ��
void gotoXY(int x, int y) {
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x, y };
	SetConsoleCursorPosition(out, pos);
}

int main() {
	//��ӡһ��С��
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
		system("cls");//���ǰ���������ˡ���������Ч����

		int boder_up = top - 1;
		int boder_down = bottom + 1;
		int boder_left = left - 1;
		int boder_right = right + 1;
		//��ӡ�߿�
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
		gotoXY(1, 1);//�ù��ص���ʼ�ģ�1,1����λ�ÿ�ʼС��Ŀ��ڵ���
		//��һ��ѭ�����ı�x��ֵ��С��������
			
			for (i = 1; i < x; ++i)
				printf("\n");
			for (j = 1; j < y; ++j)
				printf(" ");
			printf("o\n");
			Sleep(20);//���ڿ���С����ٶ�

			if ((x == top)||(x==bottom)){
				speed_x = -speed_x;
				//printf("\a");//�����߽�����
			}
			if ((y == left) || (y == right)) {
			
				speed_y = -speed_y;
				//printf("\a");//�����߽�����
			}
		
	}
	
	return 0;

}

