//10��26�ſ�ʼ
//11��13�ż���
#include <stdio.h>
#include <stdlib.h>

int main() {
	//��ӡһ��С��
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
		system("cls");//���ǰ���������ˡ���������Ч����

		//��һ��ѭ�����ı�x��ֵ��С��������
			
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