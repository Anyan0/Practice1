//10��26�ſ�ʼ
//11��13�ż���
#include <stdio.h>
#include <stdlib.h>

int main() {
	//��ӡһ��С��
	int i, j;
	int x = 1;
	int y = 10;

	int height = 10;
	int speed = 1;

	while (1) {
		x = x + speed;
		system("cls");//���ǰ���������ˡ���������Ч����

		//��һ��ѭ�����ı�x��ֵ��С��������
			
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