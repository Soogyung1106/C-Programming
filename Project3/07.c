#include <stdio.h>  
#include <string.h>
int *add_ten(int *);
void increase();

void main(void) {
	/*�����ð� ����
	strcpy(ary, "apple")
	strlen(ary)
	strcmp("c", "b") //��й�ȣ �Է��ؼ� ���� �ٸ��� Ȯ���� �� ���� ����!
	strcat()
	*/

	/*�ǽ�1
	char password[] = "123456";
	char str[30];
	int val;
	while (1) {

		puts("��й�ȣ�� �Է��ϼ���.");
		gets(str);
		val = strcmp(password, str);
		printf("%d\n", val);

	}
	*/

	
	/* �ǽ�2 :  ��ġ�ϸ� ok, �׷��� ������ invalid password ���
	char password[] = "123456";
	char str[30];
	
	while (1) {

		puts("��й�ȣ�� �Է��ϼ���.");
		gets(str);
		
		if (!strcmp(password, str))
			puts("ok\n");
		else
			puts("invalid password\n");
	}

	*/


	/*�ǽ�3 : scanf�� gets�� ����
	char str[80];
	printf("���ڿ��� �Է��ϼ���.");
	//scanf_s("%s", str, sizeof(str));  //sizeof(str) �ݵ�� ���ֵ���
	gets(str);
	printf("�Էµ� ���ڿ� : %s\n", str);
	system("pause");
	*/

	 /*�ǽ�4 <printf�� puts�� ���� > �ڿ� \n�� ���Եǰ� �� �ǰ��� ���� 

	printf("a");
	printf("b");
	printf("c");
	printf("\n");
	puts("a");
	puts("b");
	puts("c");
	system("puase");
	*/

	/* �ǽ�5 :  ���� ����� �Լ� getchar putchar �⺻����
	int ch;
	printf("���ڿ� �ϳ��� �Է��ϼ���.");
	ch = getchar();
	printf("�Էµ� ���� : ");
	putchar(ch);
	printf("\n");
	system("pause");
	*/

	 //�ǽ�6 
	//int ch;
	//printf("���� �ϳ��� �Է��ϼ���.");
	//ch = getchar();
	//printf("�Էµ� ������ �ƽ�Ű�ڵ�� : %d\n", ch); //ch�� �ƽ�Ű�ڵ� �� '����'�� ����
	//printf("�Էµ� ������ %%c���� : %c\n", ch); //ch�� �ƽ�Ű�ڵ� ������ �����Ǵ� '����'�� ����
	//system("pause");
	

	//<point> ->���۴¿��͸� ĥ������ �����͸� ��Ƶ״ٰ� �����Ѵ�.


	/* �ǽ�7
	char str[80];  //���ڿ��� ������ �迭
	int ch; //getchar �Լ��� ���ϰ��� ������ ����
	int i; //�ݺ� �����

	printf("���ڿ��� �Է��ϼ��� : ");
	for (i = 0; i < 4; i++) { // i�� 0���� 3���� ���ϸ鼭 4�� �ݺ�
		ch = getchar(); //Ű����κ��� ���ڸ� �Է� �޾� �����Ѵ�.
		str[i] = ch; //���ϵ� ���ڸ� �迭�� ���ʷ� ����
	}

	str[i] = '\0'; //�������� �ι��ڸ� �����Ͽ� ���ڿ��� �ϼ�
	printf("�Էµ� ���ڿ� : ");
	
	i = 0; //���� �ʱ�ȭ 
	while (str[i] = '\0') {
		putchar(str[i]); //ȭ�鿡 ���� ���
		i++; //���� ���ڷ� �̵�
	}
	printf("\n");
	*/

	//13�� : ������ ������ �������� ���� 
	/*
	������ �̸��� ���ٸ� �� ������ �ִ� ������ ����.
	�ڵ�������? �Լ� �ȿ��� ����� ����
	-> �����Ⱓ�� �Լ��� ȣ��Ǿ� ����Ǵ� ������.
	-> �޸��� ��ġ : ���� ����(��? ȿ������ �޸� ������ ����)

	Call by value : 

	Call by reference : 

	*/

	

	/*�ǽ�8 : �ڵ������� �����͸� �����Ͽ� ȣ���Լ����� �ٽ� �����ϴ� ���� �����ϴ�. // ����
	
	int a = 10;
	int *ap;
	ap = add_ten(a);
	printf("a : %d\n", *ap);
	*/	
	
	/*���� ���� static�� Ư¡
	1. ���� �ʱ�ȭ ���� �ʾƵ� �׻� 0���� �ʱ�ȭ�Ǿ� �ִ�.
	2. �Լ��� ������ ���� ������ �ʴ´�.
	*/


	/* �ǽ�9 : static ���� ���� <-> �ڵ����� 

	int i;
	for (i = 0; i < 5; i++) {
		increase();
	}
	*/

	/* �ܺκ��� = �������� 
	(����) 
	(����) ���� �ʴ� ���� ��õ! ��ΰ� ���� ������ �� �����Ƿ� ����� ��� ����Ǿ����� ã�� �����.
	*/

}

int *add_ten(int b) {
	b = b + 10;
	return &b;
}

void increase() {
	static int sum = 0;
	//int sum = 0;
	sum++;
	printf("sum : %d\n", sum);
}