#include <stdio.h>
#include <string.h>

int main() {
	// 키보드로부터 문장 입력 후 대문자를 소문자로 바꾸는 프로그램 
	// 바뀐 문장과 바뀐 문자 수도 출력
	char str1[100]; // 입력 받을 문장
	int cnt = 0; //바뀐 문자 수 세기
	printf("문장 입력 : ");
	gets(str1); //띄어쓰기 포함 입력
	for (int i = 0; i < strlen(str1); i++) {
		if (str1[i] >= 'A' && str1[i] <= 'Z') {
			str1[i] = str1[i] + 32; //아스키코드로 변환
			cnt++; 
		}
	}
	printf("바뀐 문장 : ");
	puts(str1); //출력
	printf("바뀐 문자 수 : %d", cnt);

	return 0;
}