/* 
�ڿ����� �Է¹޾� �ڿ����� ����� ��� ���
*/
#include <stdio.h>

int main() {
	int n;
	printf("�ڿ��� �Է�: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (n%i == 0) {
			printf("%d", i);
			if (i == n) continue;
			else printf(", ");
		}
	}
	return 0;
}