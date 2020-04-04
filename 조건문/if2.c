#include <stdio.h>

void main(void) {

	//char op = 0;  <주의> char자료형은 문자이지만 굳이 초기화한다면 0으로 초기화해줌..
	//<?> 문자는 0으로 초기화해주고, 문자열은 뭘로 초기화? 
	char op; //<?> 지역변수는 항상 초기화해줘야?? NO


	printf("남자는 1번, 여자는 2번\n");
	printf("번호 입력 :");
	scanf("%c", &op); // <오류> &안 붙혀서!!

	if (op == '1') {
		printf("남자\n");
	}
	else {
		printf("여자\n");
	}

}