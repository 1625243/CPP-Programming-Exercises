#include "MineSweeper.h"

int main()
{
	int height;		//����
	int width;		//����
	int num_mine;

	printf("���� ���� ������ ���̸� �Է��� �ּ���(�ִ� 80) : ");
	scanf_s("%d", &width);
	printf("���� ���� ������ ���̸� �Է��� �ּ���(�ִ� 40) : ");
	scanf_s("%d", &height);

	printf(" <Mine Sweeper> \n");
	printf(" �ż��� ������ ������ �Է��� �ּ��� : ");
	scanf_s("%d", &num_mine);
	playMineSweeper(num_mine, width, height);

	return 0;
}