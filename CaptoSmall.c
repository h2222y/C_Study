#include <stdio.h>
#include <string.h>

int main() {
	// Ű����κ��� ���� �Է� �� �빮�ڸ� �ҹ��ڷ� �ٲٴ� ���α׷� 
	// �ٲ� ����� �ٲ� ���� ���� ���
	char str1[100]; // �Է� ���� ����
	int cnt = 0; //�ٲ� ���� �� ����
	printf("���� �Է� : ");
	gets(str1); //���� ���� �Է�
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str1[i] + 32; //�ƽ�Ű�ڵ�� ��ȯ
			cnt++; 
		}
	}
	printf("�ٲ� ���� : ");
	puts(str1); //���
	printf("�ٲ� ���� �� : %d", cnt);

	return 0;
}