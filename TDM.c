#include <stdio.h>

int main() {
	int n,m; //단어 개수 n, 문서 개수 m
	char ch[50][100]; //단어 입력, 문자열 처리
	int TDM[35][50] = { 0 }; // tdm 배열 입력 받음
	// int result[100][100] = { 0 }; //결과 출력
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
				printf("문서%d ", x);
				printf(" %d\n", TDM[y][x]);
			}
		}
	}
	return 0;

}