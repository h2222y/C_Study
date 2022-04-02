#include <stdio.h>

// 방법 1
/* void Recur(int level);
int sum = 0;

int main() {
	Recur(10);
	printf("%d", sum);
	return 0;
}


void Recur(int level) {
	// 1부터 일정 수 level까지 합을 구하는 함수 구현
	if (level ==0) return level;
	Recur(level - 1);
	sum += level;
} */

// 방법 2
int Recur(int n);

int main()
{	
	int ret;
	ret =Recur(10);
	printf("%d", ret);
	return 0;
}

int Recur(int n) {
	if (n == 1) return 1;
	else return(n + Recur(n - 1));
}
 