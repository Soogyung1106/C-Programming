//문제 : 포인터 p를 이용해서 배열 요소의 순서를 바꾼 후, 그 결과를 출력하는 프로그램
#include <stdio.h>

int main(void) {

	int arr[5] = { 1,2,3,4,5 };
	int *ptr = arr;

	//바뀌기 전
	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	puts("");

	//배열 요소의 순서 바꾸기
	/*(생각)
	ptr[i]와 ptr[4-i]가 서로 자리 바꿈
	*/
	for (int i = 0; i <= 1; i++) {
		int temp = ptr[i]; //<오류해결> 자리 바꿀 때 temp 제 3의 컵 등장 
		ptr[i] = ptr[4 - i];
		ptr[4 - i] = temp;
	}

	//바뀐 후 출력
	for (int i = 0; i < 5; i++) {
		printf("%d\n", ptr[i]);
	}

	return 0;
}