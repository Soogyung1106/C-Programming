#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*Topic2 : �迭 */
int main(void) {

	/* Tip
	(POINT1) �迭�� �����ϸ� ó���� �����Ⱚ�� �����Ѵ�.
	int ages[5] = {1};
	5ĭ �߿� �� ĭ�� 1, �������� 0���� �ʱ�ȭ��.

	(POINT2) �迭�� ������ �� �ʱ�ȭ�ϸ� �迭 ����� ������ ������ �� �ִ�.
	int ages[ ] = {1,2,3,4}; 

	(POINT3) ��Ģ : �迭�� ������ ������ ���� �ݵ�� '���'�� ����ؾ� ��!
	int a = 100; 
	int ages[a]; //������ �迭�� ���� ����

	(POINT4) sizeof(�迭�� �̸�)  -> �迭�� ���̸�ŭ ũ�� ���(byte)
	int : 4byte
	
	sizeof(ages) //20����Ʈ
	sizeof(ages)/sizeof(ages[0])

	*/

	/*�ǽ�1

	int ages[5]; //�迭�� ũ�� ����
	int tot = 0;  //%d
	double avg;
	int i;
	//(POINT)
	//%lf :8����Ʈ   -> �̰� ���
	//%f  : 4����Ʈ -> �� ��� x

	printf("�ټ����� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++)
		scanf_s("%d", &ages[i]);

	for (i = 0; i < 5; i++)
		tot+=ages[i];

	avg = tot / 5.0;

	printf("�Էµ� �ټ����� ���� : ");

	for (i = 0; i < 5; i++)
		printf("%d ", ages[i]);

	printf("\n �ټ� ���� ��� ���̴� %.1lf�Դϴ�.\n", avg);
	*/

	/*�ǽ�2

	//(POINT) ������ �迭 �����ϴ� ���
	//(���1)
	//char arr[] = "Good time"; //�迭�� ũ�� ����x 
	char arr[10] = "Good time"; // ũ�� ���� 
	//(���2)
	//char arr[10] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e' };

	//<?> ���1�� ���2�� ������????

	printf("%s\n", arr); //(POINT) '�迭�� �̸� = �ּ�' �̿�  -> %s���!
	
	// for���� �̿��� �迭�� ��� ���
	//for (int i = 0; i < 10; i++)
	//	printf("%c", arr[i]); //<�Ǽ�> printf������ ���ۼ�Ʈ(&) �� ������. -> %c ���
	
	*/

	
	
	/* �ǽ�3
	char word[50];
	word[0] = 'L';
	word[1] = 'O';
	word[2] = 'V';
	word[3] = 'E';
	//<����> word[4] = '\0';   �ι���('\0')�� ��ҷ� �־���� �ι��� ���������� ��� 
	//�� �׷��� LOVE�� ������ ������ ������ ������ �� ��µ�.
	printf("%s\n", word);
	*/

	
	//��Ÿ�� ���� �߻� (���� �߿� �߻��ϴ� ����)
	//C�� �޸𸮸� ���α׷��Ӱ� ���� ����, �ڹٴ� ������ �÷����� �˾Ƽ� ������ ����
	
	/* �ǽ�4 <????>
	char word[4];
	scanf("%s", word);
	printf("%s", word); //<����> �޸� �Ҵ� ������ ����� ������ ��ü������ ���α׷� �����Ŵ
	*/

	/* (����) ***
	char str[80] = "Hello";
	str= "good bye"; -> '�迭�� �̸� = �����ּ�' -> ���-> ����� ����ó�� ���ڿ� ����x
	
	<�ذ�å> strcpy(str, "good bye"); -> �����ϰ� ���� ��� ���ڿ� �Լ� strcpy ����ؾ�!
	//OR ���� �Ѱ��� ����, ��°�δ� ���ڿ��Լ� ��� �� �ϰ�� �� �ٲ�
	*/

	/*�ǽ�5 : �ܾ� �Ųٷ� ����ϴ� �ڵ� 

	char word[80];
	int i = 0;

	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", word);

	printf("%s", word);
	printf("\n");

	// �Է��� �ܾ� �Ųٷ� ��½�Ű�� �κ�
	//<POINT> �ι��ڰ� ����ִ� ��ġ�� ã�� 
	while (word[i] != '\0') {// ���� i=0�� ���¿��� ���� 
		i++;
	}
	
	// i=10�� ���·� ����
	--i;

	for (; i >= 0; i--)  // <point> 
		printf("%c", word[i]);

	printf("\n");

	*/

	/* <����>
	for (int i = 0; i < 80; i++) {
	if (word[i] = '\0')
	break;
	else
	printf("%c", word[i]);
	}
	*/

	/* <����>
	for (int i = 79; i >= 0; i--) {
	/*
	if (word[i] = '\0')
	continue;
	else
	printf("%c", word[i]);


	if(word[i] != '\0')
	printf("%c", word[i]);
	}
	*/


	return 0;


}