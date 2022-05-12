/* 
자연수를 입력받아 자연수의 약수를 모두 출력
*/
#include <stdio.h>

int main() {
	int n;
	printf("자연수 입력: ");
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