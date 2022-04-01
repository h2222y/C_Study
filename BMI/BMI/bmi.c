#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int kg;
	double height, BMI; //키는 cm 
	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%d %lf", &kg, &height);
	//BMI 구할시 키를 M단위로 환산
	height *= 1e-2;
	BMI = kg / (height*height);
	if (BMI >= 20.0 && BMI <= 25.0) {
		printf("표준입니다.");
	}
	else printf("체중관리가 필요합니다.");

	return 0;
}