#include <stdio.h>
/*
������ ���� ����
*/
int main()
{	
	int arr[5] = { 1,2,3,4,5 };

	int *ptr_arr = arr;
	
	printf("%d\n", *ptr_arr); //1��

	printf("%d\n", *(++ptr_arr)); //2��
	printf("%d\n", *(++ptr_arr)); //3��
	printf("%d\n", &ptr_arr); //before �ּ� ���

	printf("%d\n", *(ptr_arr + 1)); //4��
	/*1ĭ �ǳ����� �ּ� ���� �����Ѵ� ���� ��
	���� �ּҵ� 1ĭ �ڷ� �����̴� �ǰ�? NO ������ ���� ������ �����Ͱ� �̵����� �ʴ´�.
	*/
	printf("%d\n", &ptr_arr); //after �ּ� ���

	printf("%d\n", *(ptr_arr + 2)); //5��

	return 0;
}