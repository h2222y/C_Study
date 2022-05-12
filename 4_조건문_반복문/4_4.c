/*
삼각형 출력하기 (for문 연습)*/
#include <stdio.h>

int main() {
	int n;
	printf("자연수 입력: ");
	scanf("%d", &n);
	// 1
	// 1 2 
	// 1 2 3 
	// . . . . 
	/*
	int t = 1;
	for (int y = 0; y < n; y++) {
		t = 1;
		for (int x = 0; x <= y; x++) {
			printf("%d ", t);
			t++;
		}
		printf("\n");
	} */

	// 4 3 2 1 
	// 3 2 1
	// 2 1 
	// 1
	/* for (int y = 0; y < n; y++) {
		for (int x = n - y; x > 0; x--) {
			printf("%d ",x);
		}
		printf("\n");
	} */

	// 1 2 3 4 
	// 1 2 3 
	// 1 2 
	// 1
	/* int t = 1;
	for (int y = 0; y < n; y++) {
		t = 1;
		for (int x = 0; x < n-y; x++) {
			printf("%d ", t);
			t++;
		}
		printf("\n");
	} */

	// 1 
	// 1 3
	// 1 3 5
	// 1 3 5 7
	/*
	int i = 1;
	for (int y = 0; y < n; y++) {
		i = 1;
		for (int x = 0; x <= y; x++) {
			printf("%d ", i);
			i += 2;
		}
		printf("\n");
	}*/

	// 1
	// 1 2 3
	// 1 2 3 4 5 
	// 1 2 3 4 5 6 7
	int t = 1;
	for (int y = 1; y <= n; y++) {
		t = 1;
		for (int x = 0; x < 2 * y - 1; x++) {
			printf("%d ", t);
			t++;
		}
		printf("\n");
	}

	return 0;
}