//11��17�տ�ʼ
//11��20�ռ����������ƺ�����ôһ��������

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#pragma warning(disable:4996)//���kbhit��������

int main() {
	int x = 5, y = 10;
	int isfire=0;
	char input;//ͨ������������С�ɻ�

	int ny = 0;//���һ������
	int ny_spped = 1;
	int getpoint = 0;//��iskilled���ж��Ƿ���������ӣ�����˱��1�������������
	int left = 0;
	int right = 20;

	while (1) {
		ny+=ny_spped;
		system("cls");//ÿ�δ�ӡ֮ǰ����ʵ�ֶ�̬
	//�ȴ�ӡ�ɻ�ǰ�Ŀ���
	//����ӵ�
		//��ӡ����
		
		//��ny��ֵ�ı䣬���ڴ��ߵ�ʱ����-ny��ʵ�������ƶ�
			
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
		//��ӡ�ɻ�ǰ��Ŀո�Ȼ���ӡ�ɻ�
		for (int j = 0; j < y; ++j) {
			printf(" ");
		}
		//��ӡ�ɻ�
		//��ӡ���ӵķɻ�
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
			if (input == ' ') {
				isfire=1;
			}
		}
		Sleep(50);
	}
	return 0;
}