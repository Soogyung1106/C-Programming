/*
14�� 
*/

#include <stdio.h>
void exchange_ptr(char **, char **);

void main(void) {
	/*
	<Point>������ �迭�� �迭 �������� ������
	������ �迭 : ������ �������� �迭�� ��Ƴ��� ��
	...
	int ary3[4] = {21, 22, 23, 24}
 	int *ptr_ary = {ary1, ary2, ary3}

	ary3�迭�� �� ��° ��� ���� ����!

	ptr_ary[2] == *(ptr_ary + 2)
	ptr_ary[2][2] =  ���� ������ �� �� �ϴ� ��
	
	*/

	/*�ǽ�1
	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11,12,13,14 };
	int ary3[4] = { 21,22,23,24 };
	int *ptr_ary[3] = { ary1, ary2, ary3 };
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%5d", ptr_ary[i][j]);  //<Point> '[]'�� �ǹ� �� ����! ������ �迭�� 1�� [] �����ϰ� �� ��°�� [] �� �� �����Ѵ�.
		}
		printf("\n");
	}
	*/

	/*�ǽ�2
	int i;

	char ary1[] = "dog" ;
	char ary2[] = "elephant" ;
	char ary3[] = "monkey" ;
	char ary4[] = "rabbit" ;
	char ary5[] = "tiger";
	char *ptr_ary[5] = { ary1, ary2, ary3, ary4, ary5 };
	//Ȥ�� char *ptr_ary[5] = {"rabbit", "tiger"...}


	char *max =NULL;
		
		//<Point> �ִ밪 Ȥ�� �ִ� ���� ã�� �˰��� -> �迭�� ù ��°�� ���� ũ�ų� ��ٰ� �����Ѵ�!


		for (i = 0; i < 4; i++) {
			if (strlen(ptr_ary[i]) < strlen(ptr_ary[i+1]))
				max = ptr_ary[i+1];
		}
		
	
		printf("���� �̸��� �� ������ : %s", max); // �ּ� ����

		//count = sizeof(animal) / sizeof(animal[0]);
		*/

		/*
		����Ʈ ���ȣ �ϳ� ������ �ּ��̴�. 2���� �迭����
		*/


		/*15�� ����*/

		/*
		���� ������
		���� �����ʹ� ���� ���Ǵ°�?
		-> �����͸� �����ϰ� �ʹٸ� ���� �����͸� �ش�.

		char *tp;
		tp = *app;
		*app;*bpp;
		*bpp=tp;

		*/	
	
	/* <Point> �������� �� ����Ʈ!
	char *ap = "success";
	char *bp = "failure"; //<?>������ ������ ���ڿ� ����� ����
	printf("ap -> %s, bp -> %s\n", ap, bp);
	exchange_ptr(&ap, &bp);
	printf("ap -> %s, bp -> %s\n", ap, bp);
	*/

	/* 
	������ �迭�� �迭 ������
	1. ������ �迭 : �����͵��� �迭 int * ap[4]
	2. �迭 ������ : 2���� int (*ap)[4]; <?>
	*/

	/* �ݵ�� �ϱ�!!!!!!
	������ + ���� = ������ + (���� x ����Ű�� �ڷ����� ũ��)
	*/

	/* �߿�!!!!! 
	
	<�ּ� ���� ����>
	2���� �迭���� ���� 3������ ������ ����Ű���� �˾ƾ�!!
	(int ary[3][4];  &ary[0][0] = 100�̶�� ����)

	&ary		ary		ary[0]
	1. &ary : �迭 ��ü�� ����Ŵ
	&ary + 1  = 100 +4*12  
	2.  ary  : ù ��° �κй迭
	ary+1 = 100 + 4*4;
	3.  ary[0] : ù ��° �迭��Ҹ� ����Ŵ
	ary[0] + 1 = 100 + 4
	
	*/
	    
	/*�ǽ�3
	int ary[3][4];
	printf("������ �迭 int ary[3][4] \n");
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
	printf("sizeof(ary)=%d \n", sizeof(ary));//�Ƹ� 48?
	printf("sizeof(&ary)=%d \n",sizeof(&ary));//���� &�� ������ 4
	printf("sizeof(ary[0])=%d \n", sizeof(ary[0]));//�Ƹ� 16
	printf("sizeof(ary[0][0])=%d \n", sizeof(ary[0][0]));//�Ƹ� 4
	system("pause");
	*/

	


}

void exchange_ptr(char**app, char **bpp) {
	char *tp;
	tp = *app;
	*app = *bpp;
	*bpp = tp;
}