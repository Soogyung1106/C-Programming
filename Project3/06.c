#include <stdio.h> //���� ok 
#include <stdio.h> //������� ����

void swap_string(char *, char*);
char func_strcat(char *, char *);

void main(void) {
	/*
	�������� ���� 3����
	������ ���, ����, ����

	(1) ������ ��� : ������ �ʴ� �ּ�
	int a;
	&a; //������ ���

	(2) ������ ���� : ������ ����� �����ϴ� ����
	int *a;
	int a; //������ ����

	�迭�� ����

	arr[1] == *(arrr+1); //�迭�� �̸��� = �迭�� '���� �ּ�'

	//�ȴٰ� �Ѵ�.....<?>
	arr[5] == 5[arr]; //��??  *(arr+5) == *(5+arr)

	//<����>
	char name[100];
	name ="soogyung";  //��? ����� ����� ������ �� ���� ������


	char *a = "abc"; //���� -> ��??

	<����, ���> �����ͺ����� ���ڿ� ����� �����ϸ�
	'�б� ���� ����'�� ����ǹǷ� '�� �̻� ���� �Ұ���'�ϴ�!!!
	char * a ="Hello";
	a[0]='h'; //�Ұ���

	<POINT>�迭�� �����ʹ� ������ �ٸ����̴�! 
	int arr[50]; //�迭
	int *a; //������ ����

	a=arr; 
	arr=a; //<����> ����� ����� ���� ���ϱ� ������

	<POINT> 
	(���zzzz1)void sum(int  �迭)
	(���2)void sum(int ������)
	-> �� ��쿡�� �迭�� �����Ͱ� ����
	// �迭�� �����ϰ� ���� ��� �� ���� ��� ��� ��� ����
	
	<POINT> //���� �߿� ����Ʈ!!
	char *name = { "a", "b", "c"}

	-> �������� : a \0 b \0 c \0

	name[0] // a
	name[1] // b -> �ι��ڸ� ������ �� ���� �ּ��� ���� �����Ѵ�.




	*/

	//���� : ���ڿ� ����� �� ��...���� ��

	/*
	strcpy�� ��� �� �ϰ� �Լ��� ���ڿ��� �����ϴ� ���α׷�

	���� strcpy, ���� strlen, �� strcmp, ���� strcat
	strcpy(���� ����, ,,,) //���� 2��
	strlen() //����1��
	strcmp() //���� 2��, ������ 0�� ��ȯ ..��, ������ ��ȯ
	-> if(!strcmp(...)


	*/
	/*�ǽ�1
	printf("�ּҰ��� ��� : %u\n", "dream");
	printf("ù ��° ���ڸ� ��� : %c\n", *"dream");
	printf("�� ��° ���ڸ� ��� : %c\n", "dream"[2]);
	*/

	/*�ǽ�2
	char str1[20] = "apple";
	char str2[20] = "banana";

	swap_string(str1, str2);

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	*/

	/*
	Topic : ���ڿ��� �����
	-> ��ǥ��  : scanf //���� ���ڿ� �Է� ���� �� x

	=> �ذ�å : gets, puts //���� : <string.h> ������� ���Խ��Ѿ�
	char name[10];

	gets(name); //���⸦ ������ ���ڿ� �Է� : printf���
	puts(name); // ���ͱ���� ���Ե� ��� : scanf ���

	*/


	/*�ǽ�3
	char novel[800] = { 0 }; //��ü �ٰŸ��� ������ �迭, �ݵ�� �ʱ�ȭ ����� �Ѵ�.
	char str_in[80]; //�Է� ���ڿ��� ������ �迭
	while (1) {
		//while�� ���� ����
		if (strcmp(str_in, "��") == 0)
			break;

		printf("���ڿ��� �Է��ϼ���. : ");
		gets(str_in);

		strcat(novel, str_in);
		strcat(novel, " ");
		printf("��������� �ٰŸ� : ");
		puts(novel);
		puts("\n");

	}
	*/

	//strcat_s(des, sizeof(des), src);
	//novel.....str_in
	
//���� : ppt 33���� ����
//���� : stringcat�Լ� ���� �����ؿ���
		
	char a[80] = { 0 }; //ù ��° ���ڿ��� ������ �迭
	char b[80] = { 0 }; //�� ���� ���ڿ��� ������ �迭

	printf("ù ��° ���ڿ��� �Է� : ");
	gets(a);
	printf("�� ��° ���ڿ��� �Է� : ");
	gets(b);
	
	char d=func_strcat(a, b);
	
	puts(d);

	puts("\n");


}

void swap_string(char *s1, char* s2) {
	char temp[80];

	strcpy(temp, s1);
	strcpy(s1, s2);
	strcpy(s2, temp);

}

char func_strcat(char *a, char *b) {
	char c[160] = { 0 }; //�Ű������� ���� �� ���ڿ��� ���ļ� ������ �迭
	
	int i = 0;
	for (; i < strlen(a); i++) {
		if (a[i] == '\0') 
			break;
		c[i] = a[i];
	}
	//�ι��ڰ� �ִ� �迭�� ��ġ ���� i�� ����

	for (int j=0; j < strlen(b); j++) {
		if (b[j] == '\0')
			break;
		c[i] = b[j];
		i++;
	}
	
	return *c;
}