/*
���� ������ �Է¹޾� ������ ����ϴ� ���α׷�
Copyright ������*/
#include <stdio.h>

int main() {
	int score;
	printf("���� �Է�: ");
	scanf("%d", &score);
	if (score >= 90) printf("A");
	else if (score >= 80) printf("B");
	else if (score >= 70) printf("C");
	else if (score >= 60) printf("D");
	else if (score >=0) printf("F");
	else printf("�߸� �Է��ϼ̽��ϴ�.");
	return 0;
}