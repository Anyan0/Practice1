#include <stdio.h>
#include <stdlib.h>

int main() {
	//��ӡһ��С��
	int i, j;
	int x = 5;
	int y = 10;

	for(x=1;x<10;x++){//��һ��ѭ�����ı�x��ֵ��С��������
		system("cls");//���ǰ���������ˡ���������Ч����
		for (i = 0; i < x; ++i)
			printf("\n");
		for (j = 0; j < y; ++j)
			printf(" ");
		printf("o\n");

	}
	return 0;

	
}