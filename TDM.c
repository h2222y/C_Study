#include <stdio.h>

int main() {
	int n,m; //�ܾ� ���� n, ���� ���� m
	char ch[50][100]; //�ܾ� �Է�, ���ڿ� ó��
	int TDM[35][50] = { 0 }; // tdm �迭 �Է� ����
	// int result[100][100] = { 0 }; //��� ���
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%s", ch[i]);
	}
	scanf("%d", &m);
	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= m; x++) {
			scanf("%d", &TDM[y][x]);
		}
	}
	for (int y = 1; y <= n; y++) {
		for (int x = 1; x <= m; x++) {
			if (TDM[y][x] == 0) {
				continue;
			}
			else {
				printf("%s ", ch[y]);
				printf("����%d ", x);
				printf(" %d\n", TDM[y][x]);
			}
		}
	}
	return 0;

}