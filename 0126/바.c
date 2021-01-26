#include<stdio.h>

//10진수를 받아서 2진수로 변환 

int main(void) {

	char binary[100] = { 0 };
	int input = 0;
	int temp = 0;
	int i = 0;

	printf("2진수를 변환할 10진수를 입력해주세요 : ");
	scanf_s("%d", &input);
	temp = input;

	
	//2진수
	while (temp != 0) {
			binary[i] = temp % 2;
			temp /= 2;
			i++;
	}

		//logic
	printf("\n변환된 2진수는:");
	
	for (int j =i-1 ; j>=0;j--){
		printf("%d", binary[j]);

	}

	printf("입니다.\n");
	return 0;

}
