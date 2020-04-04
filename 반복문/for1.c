//10~1까지 더하기
#include <stdio.h>

void main(void) {

	int i, sum = 0; // 지역 변수이니까 초기화
					//<?>return하려면 for문이 종료된 다음에도 사용할 수 있게 for문 밖에다 선언해줘야!

	for (i = 10; i > 0; i--) { //초, 조, 증

		sum += i; //sum = sum + i 
				  //sum = 0+ 10, 10+9, 10+9+8, ..., 10+9+...+2+1
	}

	printf("%d\n", sum);

	return ;
}
