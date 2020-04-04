/*
14장 
*/

#include <stdio.h>
void exchange_ptr(char **, char **);

void main(void) {
	/*
	<Point>포인터 배열과 배열 포인터의 차이점
	포인터 배열 : 포인터 변수들을 배열로 모아놓은 것
	...
	int ary3[4] = {21, 22, 23, 24}
 	int *ptr_ary = {ary1, ary2, ary3}

	ary3배열의 세 번째 요소 참조 과정!

	ptr_ary[2] == *(ptr_ary + 2)
	ptr_ary[2][2] =  참조 연산을 두 번 하는 것
	
	*/

	/*실습1
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int *ptr_ary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", ptr_ary[i][j]);  //<Point> '[]'의 의미 잘 이해! 포인터 배열을 1번 [] 참고하고 두 번째로 [] 한 번 참조한다.
		}
		printf("\n");
	}
	*/

	/*실습2
	int i;

	char ary1[] = "dog" ;
	char ary2[] = "elephant" ;
	char ary3[] = "monkey" ;
	char ary4[] = "rabbit" ;
	char ary5[] = "tiger";
	char *ptr_ary[5] = { ary1, ary2, ary3, ary4, ary5 };
	//혹은 char *ptr_ary[5] = {"rabbit", "tiger"...}


	char *max =NULL;
		
		//<Point> 최대값 혹은 최대 길이 찾는 알고리즘 -> 배열의 첫 번째가 가장 크거나 길다고 가정한다!


		for (i = 0; i < 4; i++) {
			if (strlen(ptr_ary[i]) < strlen(ptr_ary[i+1]))
				max = ptr_ary[i+1];
		}
		
	
		printf("가장 이름이 긴 동물은 : %s", max); // 주소 전달

		//count = sizeof(animal) / sizeof(animal[0]);
		*/

		/*
		포인트 대괄호 하나 있으면 주소이다. 2차원 배열에서
		*/


		/*15장 시작*/

		/*
		다중 포인터
		이중 포인터는 언제 사용되는가?
		-> 포인터를 조작하고 싶다면 이중 포인터를 준다.

		char *tp;
		tp = *app;
		*app;*bpp;
		*bpp=tp;

		*/	
	
	/* <Point> 스와핑할 때 포인트!
	char *ap = "success";
	char *bp = "failure"; //<?>포인터 변수에 문자열 상수를 저장
	printf("ap -> %s, bp -> %s\n", ap, bp);
	exchange_ptr(&ap, &bp);
	printf("ap -> %s, bp -> %s\n", ap, bp);
	*/

	/* 
	포인터 배열과 배열 포인터
	1. 포인터 배열 : 포인터들의 배열 int * ap[4]
	2. 배열 포인터 : 2차원 int (*ap)[4]; <?>
	*/

	/* 반드시 암기!!!!!!
	포인터 + 정수 = 포인터 + (정수 x 가리키는 자료형의 크기)
	*/

	/* 중요!!!!! 
	
	<주소 관련 연산>
	2차원 배열에서 다음 3가지가 무엇을 가리키는지 알아야!!
	(int ary[3][4];  &ary[0][0] = 100이라고 가정)

	&ary		ary		ary[0]
	1. &ary : 배열 전체를 가리킴
	&ary + 1  = 100 +4*12  
	2.  ary  : 첫 번째 부분배열
	ary+1 = 100 + 4*4;
	3.  ary[0] : 첫 번째 배열요소를 가리킴
	ary[0] + 1 = 100 + 4
	
	*/
	    
	/*실습3
	int ary[3][4];
	printf("이차원 배열 int ary[3][4] \n");
	printf("&ary=%u \n",&ary);//x
	printf("&ary+1=%u \n\n", &ary+1);//x+48
	
	printf("ary=%u \n", ary);//x
	printf("ary+1=%u \n", ary+1);//x+16
	printf("&ary[0]+1=%u \n\n", &ary[0]+1);//x+16


	printf("ary[0]=%u \n", ary[0]);//x
	printf("ary[0]+1=%u \n", ary[0]+1);//x+4
	printf("&ary[0][0]+1=%u \n", &ary[0][0]+1);//x+4
	puts("");
	puts("");
	printf("sizeof(ary)=%d \n", sizeof(ary));//아마 48?
	printf("sizeof(&ary)=%d \n",sizeof(&ary));//예상 &가 들어갔으니 4
	printf("sizeof(ary[0])=%d \n", sizeof(ary[0]));//아마 16
	printf("sizeof(ary[0][0])=%d \n", sizeof(ary[0][0]));//아마 4
	system("pause");
	*/

	


}

void exchange_ptr(char**app, char **bpp) {
	char *tp;
	tp = *app;
	*app = *bpp;
	*bpp = tp;
}