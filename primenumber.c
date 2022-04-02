#include <stdio.h>

int main() {
	int num; //입력 받을 정수
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &num);
	int p=0; //소수
	int cnt = 0; //5칸 출력하기 위해 카운트

	for (int i = 2; i < num; i++) {
		//소수 판별하기
		if (i == 2) p = 1; //2는 무조건 소수
		for (int j = 2; j < i; j++) { // 입력 받은 정수보다 1작은 값까지 계속 나눠봐서 소수 판별
			if (i%j == 0) {  //나누어 떨어지는 수가 존재하는 경우
				p = 0; //p를 flag처럼 활용 
				break;
			}
			else { 
				p = 1; //나누어 떨어지지 않는 경우
			}
		}
		if (p == 1){
			cnt++; 
			printf("%2d ", i); //해당하는 값이 소수면 출력됨, %2d로 숫자 일정하게 출력해줌
			if (cnt % 5 == 0) printf("\n"); //cnt가 5의 배수일때마다 한 칸 내리기
		}
	}
	return 0;
}