#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main() {
	int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums) { //로또 번호를 입력받는다
	for (int i = 0; i < 6; i++) {
		printf("번호 입력 : ");
		scanf("%d", lotto_nums+i); //주소값으로 입력 받아야함
		for(int j=0;j<i;j++){
			if (i!=0 &&( lotto_nums[i] == lotto_nums[j])) {// 로또 번호가 중복되면 안됨
				printf("같은 번호가 있습니다!\n");
				i--; //다시 입력받기 위해 
			}
			else continue;
		}
	}
}
void print_nums(int *lotto_nums) {
	printf("로또 번호 : "); //로또 번호 출력
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]); //로또 번호 출력하기
	}
}