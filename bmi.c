#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int kg;
	double height, BMI; //Ű�� cm 
	printf("������(kg)�� Ű(cm) �Է� : ");
	scanf("%d %lf", &kg, &height);
	//BMI ���ҽ� Ű�� M������ ȯ��
	height *= 1e-2;
	BMI = kg / (height*height);
	if (BMI >= 20.0 && BMI <= 25.0) {
		printf("ǥ���Դϴ�.");
	}
	else printf("ü�߰����� �ʿ��մϴ�.");

	return 0;
}