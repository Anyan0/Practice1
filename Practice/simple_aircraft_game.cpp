//11��17�տ�ʼ
//11��20�ռ����������ƺ�����ôһ��������

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#pragma warning(disable:4996)//���kbhit��������

int main() {
	int x = 5, y = 10;
	char input;//ͨ������������С�ɻ�

	while (1) {
		system("cls");//ÿ�δ�ӡ֮ǰ����ʵ�ֶ�̬
	//�ȴ�ӡ�ɻ�ǰ�Ŀ���
		for (int i = 0; i < x; i++) {
			printf("\n");
		}
		//��ӡ�ɻ�ǰ��Ŀո�Ȼ���ӡ�ɻ�
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		//��ӡ�ɻ�
		printf("*");
		printf("\n");

		////ͨ������WASD���÷ɻ��ƶ�
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

		//����֮ǰ�ķ�������֮��Ҫ�س�����Ч���ܲ����getch()��������ø��õ����飬����kbhit�ж��Ƿ�������
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