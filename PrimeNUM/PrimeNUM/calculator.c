#include <stdio.h>

int main() {
	int num1, num2;
	char op;
	printf("사칙연산 입력(정수) : ");
	scanf("%d %c %d", &num1,&op,&num2);
	switch (op) {
	case'+': 
		printf("%d%c%d=%d", num1, op, num2, num1 + num2);
		break;
	case'-': 
		printf("%d%c%d=%d", num1, op, num2, num1 - num2);
		break;
	case'*': 
		printf("%d%c%d=%d", num1, op, num2, num1 * num2);
		break;
	case'/': 
		printf("%d%c%d=%d", num1, op, num2, num1 / num2);
		break;
	
	}
	return 0;
}