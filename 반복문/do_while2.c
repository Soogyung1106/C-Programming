/*
입력받은 값이 10보다 클때까지 무한 반복됩니다.
*/
#include <stdio.h>

void main(void) {
	
	int a= 0;
	do {
		printf("값을 입력하세요. \n");
		scanf("%d", &a);
	} while (a<=10);  // 실행문을 실행할 조건 : 입력값이 10이하인 경우, 10보다 크면 실행 중지

	printf("10보다 큰 수를 입력 하였으므로 루프를 중지합니다. \n");
}
