#include <stdio.h>

void input_nums(int *lotto_nums); // �迭�� �ζ� ��ȣ�� �Է��ϴ� �Լ�
void print_nums(int *lotto_nums); // �迭�� ����� ���� ����ϴ� �Լ�

int main() {
	int lotto_nums[6]; //�ζ� ��ȣ ������ �迭

	input_nums(lotto_nums); // �Է� �Լ� ȣ��
	print_nums(lotto_nums); // ��� �Լ� ȣ��
	return 0;
	return 0;

}
void input_nums(int *lotto_nums) {
	int rand_num = 0; // �ζ� ��ȣ �Է� ���� ����
	for (int i = 0; i < 6; i++) {
		printf("��ȣ �Է� : ");
		scanf("%d", &rand_num); // ��ȣ �Է�
		int flag = 0; // ���� ��ȣ ������ flag =1�� ���� 
		for (int j = 0; j < i; j++) { 
			if (lotto_nums[j] == rand_num) //�̹� �����ϴ� ��ȣ �� ���
			{
				flag = 1; 
				break;
			}
		}
		if (!flag) {
			lotto_nums[i] = rand_num; // �������� �ʴ� ��ȣ�� ��� �迭�� ����
		}
		else {
			printf("���� ��ȣ�� �ֽ��ϴ�!\n"); //���� �޼���
			i--; //�ٽ� ����
		}
	}
}

void print_nums(int *lotto_nums) {
	printf("�ζ� ��ȣ : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]); // �迭 ���
	}
}