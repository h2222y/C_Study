/* 
자연수 n(1~99)을 입력 받은 후 1~n까지 자연수를 순서대로 출력,
일의 자리가 3,6,9이면 숫자 대신 별표 출력(369게임)
*/
#include <stdio.h>

int main() {
	int n;
	printf("자연수 입력: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
			printf("* ");
		}
		else printf("%d ", i);
	}
	return 0;
}