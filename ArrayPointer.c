#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main() {
	int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums) { //�ζ� ��ȣ�� �Է¹޴´�
	for (int i = 0; i < 6; i++) {
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums+i); //�ּҰ����� �Է� �޾ƾ���
		for(int j=0;j<i;j++){
			if (i!=0 &&( lotto_nums[i] == lotto_nums[j])) {// �ζ� ��ȣ�� �ߺ��Ǹ� �ȵ�
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--; //�ٽ� �Է¹ޱ� ���� 
			}
			else continue;
		}
	}
}
void print_nums(int *lotto_nums) {
	printf("�ζ� ��ȣ : "); //�ζ� ��ȣ ���
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]); //�ζ� ��ȣ ����ϱ�
	}
}