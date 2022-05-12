/*
시험 점수를 입력받아 학점을 계산하는 프로그램
Copyright 김혜수*/
#include <stdio.h>

int main() {
	int score;
	printf("점수 입력: ");
	scanf("%d", &score);
	if (score >= 90) printf("A");
	else if (score >= 80) printf("B");
	else if (score >= 70) printf("C");
	else if (score >= 60) printf("D");
	else if (score >=0) printf("F");
	else printf("잘못 입력하셨습니다.");
	return 0;
}