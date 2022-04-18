#include <stdio.h>

void input_nums(int *lotto_nums); // 배열에 로또 번호를 입력하는 함수
void print_nums(int *lotto_nums); // 배열에 저장된 값을 출력하는 함수

int main() {
	int lotto_nums[6]; //로또 번호 저장할 배열

	input_nums(lotto_nums); // 입력 함수 호출
	print_nums(lotto_nums); // 출력 함수 호출
	return 0;
	return 0;

}
void input_nums(int *lotto_nums) {
	int rand_num = 0; // 로또 번호 입력 받을 변수
	for (int i = 0; i < 6; i++) {
		printf("번호 입력 : ");
		scanf("%d", &rand_num); // 번호 입력
		int flag = 0; // 같은 번호 있을시 flag =1로 변경 
		for (int j = 0; j < i; j++) { 
			if (lotto_nums[j] == rand_num) //이미 존재하는 번호 일 경우
			{
				flag = 1; 
				break;
			}
		}
		if (!flag) {
			lotto_nums[i] = rand_num; // 존재하지 않는 번호일 경우 배열에 저장
		}
		else {
			printf("같은 번호가 있습니다!\n"); //에러 메세지
			i--; //다시 저장
		}
	}
}

void print_nums(int *lotto_nums) {
	printf("로또 번호 : ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto_nums[i]); // 배열 출력
	}
}