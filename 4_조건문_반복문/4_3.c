/* 
�ڿ��� n(1~99)�� �Է� ���� �� 1~n���� �ڿ����� ������� ���,
���� �ڸ��� 3,6,9�̸� ���� ��� ��ǥ ���(369����)
*/
#include <stdio.h>

int main() {
	int n;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("* ");
		}
		else printf("%d ", i);
	}
	return 0;
}