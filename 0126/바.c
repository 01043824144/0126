#include<stdio.h>

//10������ �޾Ƽ� 2������ ��ȯ 

int main(void) {

	char binary[100] = { 0 };
	int input = 0;
	int temp = 0;
	int i = 0;

	printf("2������ ��ȯ�� 10������ �Է����ּ��� : ");
	scanf_s("%d", &input);
	temp = input;

	
	//2����
	while (temp != 0) {
			binary[i] = temp % 2;
			temp /= 2;
			i++;
	}

		//logic
	printf("\n��ȯ�� 2������:");
	
	for (int j =i-1 ; j>=0;j--){
		printf("%d", binary[j]);

	}

	printf("�Դϴ�.\n");
	return 0;

}
