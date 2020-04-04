#include <stdio.h>
/*
포인터 연산 예제
*/
int main()
{	
	int arr[5] = { 1,2,3,4,5 };

	int *ptr_arr = arr;
	
	printf("%d\n", *ptr_arr); //1번

	printf("%d\n", *(++ptr_arr)); //2번
	printf("%d\n", *(++ptr_arr)); //3번
	printf("%d\n", &ptr_arr); //before 주소 출력

	printf("%d\n", *(ptr_arr + 1)); //4번
	/*1칸 건너편의 주소 값을 참조한다 했을 때
	실제 주소도 1칸 뒤로 움직이는 건가? NO 참조만 하지 실제로 포인터가 이동하지 않는다.
	*/
	printf("%d\n", &ptr_arr); //after 주소 출력

	printf("%d\n", *(ptr_arr + 2)); //5번

	return 0;
}